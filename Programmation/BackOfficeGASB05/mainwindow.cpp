#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aproposde.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QProgressBar>
#include <QRegExp>
#include <QSqlError>


MainWindow::MainWindow(connexion *laConnexion, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    uneConnexion=laConnexion;
    ui->setupUi(this);
    setWindowTitle(uneConnexion->leLogin);
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
    ui->labelEtat->setVisible(false);
    ui->labelNomFichier->setVisible(false);
    ui->progressBarSynchro->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonOuvrir_clicked()
{
    nomFichier=QFileDialog::getOpenFileName(this,"Ouverture de Fichier", QDir::currentPath(),"*.csv");
    QFile monFichier(nomFichier);
    if(monFichier.open(QFile::ReadOnly|QIODevice::Text))
    {
        ui->pushButtonSynchro->setEnabled(true);
        ui->progressBarSynchro->setVisible(true);
        ui->labelEtat->setVisible(false);
        ui->textEditDocOuvert->clear();
        ui->labelNomFichier->setText(nomFichier);
        ui->labelNomFichier->setVisible(true);
        QTextStream in(&monFichier);
        //J'initialise ma variable privée de nombre le ligne a 0
        nbrLine=0;
        while(!in.atEnd())
        {
            //Je lis le nombre de ligne du fichier
            nbrLine++;
            qDebug()<<"nombre de ligne 1"<<nbrLine;
            QString ligneLue=in.readLine();
            //penser à contrôler le format de la ligne lue splitter sur le separateur et compter le nb de valeur
            //avertir en cas d'erreur
            ui->textEditDocOuvert->append(ligneLue);
        }
        monFichier.close();
    }
    else
    {
        statusBar()->showMessage("Fichier non ouvert");
    }
}

void MainWindow::on_pushButtonQuitterAppli_clicked()
{
    this->close();
}

void MainWindow::on_pushButtonSynchro_clicked()
{
    qDebug()<<"void MainWindow::on_pushButtonSynchro_clicked()";
    ui->labelEtat->setVisible(false);
    QFile monFichier(nomFichier);
    QString req;
    req="insert INTO Licence values ";
    if(monFichier.open(QFile::ReadOnly|QIODevice::Text))
    {


        QSqlQuery reqDelete("TRUNCATE Licence");
        reqDelete.exec();
        QString sep;
        QTextStream in(&monFichier);
        QSqlQuery maRequeteReplace;

        //on se débarasse de la première ligne
        QString ligneLue=in.readLine();
        nbrLine--;
        //On en profite pour connaitre le nombre de champs de la table pour la progresse bar
        QStringList listofValues;
        listofValues.append(ligneLue.split(','));
        int nbChamps=listofValues.count();
        qDebug()<<"nbChamp "<<nbChamps;

        float value=100 ;
        value=value/nbrLine;
        qDebug()<<value;
        value=value/nbChamps;
        qDebug()<<value;
        float valueProgressBar=0;
        //initialisation du progresBar
        //ma valeur = 100 (%) divisé par le nombre de ligne divisé lui même par le nombre de champs

        int noLigne=0;
        //pour chaque ligne du fichier lu
        while(!in.atEnd())
        {
            //lecture d'une ligne dans le fichier
            ligneLue=in.readLine();
            noLigne++;
            qDebug()<<"numéro de ligne "<< noLigne;
            qDebug()<<"nombre de ligne "<<nbrLine;

            //on splitte sur la ,
            QStringList valeurList=ligneLue.split(",");

            qDebug()<<"voici la liste des champs"<<valeurList;

            //nouvelle QStringList à partir de valeurList
            QStringList listeDesValeurs;

            //traitement des doubles quotes concatenation des cellules qui en contiennent
            bool dansDoubleQuote=false;
            int noCellule=0;
            do
            {

                QString contenuChamp=valeurList[noCellule];
                qDebug()<<"la cellule examinee"<<contenuChamp;
                if (contenuChamp.contains("'"))
                {
                    QString valeurTrouveeApostrophe=contenuChamp.replace("'","''");
                    qDebug()<<"Il y a une apostrophe"<<contenuChamp;
                    noCellule++;
                    listeDesValeurs.append(valeurTrouveeApostrophe);
                }
                //si la cellule contient plusieurs doublequote
                if(contenuChamp.contains("\"\""))
                {
                    //remplacer toutes les doubles quotes par rien du tout
                    contenuChamp.remove(QChar('\"\"'), Qt::CaseInsensitive);
                    listeDesValeurs.append(contenuChamp);

                }
                else//pas deux doubles quotes
                {
                    //sinon
                    //si la cellule contient une double quote
                    if(contenuChamp.contains('"'))
                    {
                        //je prends le contenu de la cellule sans la double quote
                        QString valeurTrouvee=contenuChamp.remove(QChar('"'), Qt::CaseInsensitive); //je retire la double quote
                        //memo du fait qu'il faut fusionner les cellules suivantes jusqu'à la prochaine double quote
                        dansDoubleQuote=true;
                        //on passe à la cellule suivante
                        noCellule++;
                        do
                        {
                            if(valeurList[noCellule].contains('"'))
                            {
                                valeurTrouvee+=valeurList[noCellule].left(valeurList[noCellule].length()-1);
                                dansDoubleQuote=false;
                            }
                            else
                            {
                                valeurTrouvee+=valeurList[noCellule];
                                noCellule++;
                            }
                        }
                        while(dansDoubleQuote==true);
                        listeDesValeurs.append(valeurTrouvee);
                    }
                    else //cellule normale sans doublequote
                    {
                        //pas de saleté donc ajout à la listeDesValeurs
                        listeDesValeurs.append(valeurList[noCellule]);
                    }
                }//fin du sinon (pas 2 doubles quotes)
                //on passe à la cellule suivante
                noCellule++;
            }
            while(noCellule<valeurList.count());
            //ecrasement de valeurList
            valeurList=listeDesValeurs;
            qDebug()<<" nombre de champs trouvé"<<listeDesValeurs.count();
            qDebug()<<"Voici la liste des valeurs"<<listeDesValeurs;
            //Création de ma Regex
            QRegExp dateRegex ("^[\\d]{2}/[\\d]{2}/[\\d]{4}$");

            /**
             * //J'affiche ma progressBar et je la mets à 0
            ui->progressBarSynchro->setVisible(true);
            ui->progressBarSynchro->setValue(0);**/

            //je préférerrai pour chaque joueur
            //que tu regardes s'il existe dans la base
            //maj s'il existe déjà du numéro de licence
            //s'il n'existe pas création
            //si dans la base mais pas dans le fichier le supprimer de la base
            //prévenir l'utilisateur qu'il y a eu 12 maj 14 ajouts et 3 supressions
            //demander à l'utiisateur de confirmer

            //préparation de la requete
            QStringList contenuReq;
            contenuReq.append("(");
            //pour chaque champ récupéré dans la ligne lue du fichier csv
            //Si ils ont le bon nombre de valeurs
            if (listeDesValeurs.count()==nbChamps)
            {
                sep="";
                qDebug()<<valeurList;
                for (int noChamp=0;noChamp<valeurList.count();noChamp++)
                {
                    //Si ma donnée est du même format que ma Regex
                    if (valeurList[noChamp].contains(dateRegex))
                    {
                        //Alors j'ajoute mes élément dans une liste et je split sur les /
                        QStringList listDate=valeurList[noChamp].split("/");
                        //Je réorganise mes éléments dans une variable au format yyyy-mm-dd
                        QString dateReorg=listDate[2]+"-"+listDate[1]+"-"+listDate[0];
                        //J'ajoute ma variable à la requete
                        contenuReq.append(sep+"'"+dateReorg+"'");
                        valueProgressBar+=value;
                    }
                    //Sinon
                    else
                    {
                        contenuReq.append(sep+"'"+valeurList[noChamp]+"'");
                        valueProgressBar+=value;
                    }
                    qDebug()<<"valueProgressBar;"<<valueProgressBar;
                    if (valueProgressBar>=1)
                    {
                        ui->progressBarSynchro->setValue(ui->progressBarSynchro->value()+valueProgressBar);
                        valueProgressBar=0;
                    }
                    //on ajoute la données dans la requete
                    sep=",";
                }
                int nbrElementContenu = contenuReq.count();
                for (int noElement=0; noElement<nbrElementContenu; noElement++)
                {
                    req+=contenuReq[noElement];
                    //Ma progressBar prend la valeur de da valeur précédente + la variable valeur
                }
                if (noLigne<nbrLine-1)
                {
                    req+="),";
                }
                else
                    req+=")";
                requeteComplete+=req;
            }
            qDebug()<<"Requete : "<< requeteComplete;
            maRequeteReplace.prepare(requeteComplete);
            req="";
        }
        ui->progressBarSynchro->setValue(100);
        if (maRequeteReplace.exec())
        {
            //Ma progressBar disparaît et prend la valeur 0
            ui->progressBarSynchro->setVisible(false);
            ui->progressBarSynchro->setValue(0);
            //Alors j'affiche un label qui confirme l'action
            ui->labelEtat->setText("Synchronisation avec la base de données distante réussi !");
            ui->labelEtat->setStyleSheet("color : green; font-weight: bold;");
            ui->labelEtat->setVisible(true);
        }
        //Sinon j'affiche un label qui indique une erreur
        else
        {
            //Ma progressBar disparaît et prend la valeur 0
            qDebug()<<maRequeteReplace.lastError();
            ui->progressBarSynchro->setVisible(false);
            ui->progressBarSynchro->setValue(0);
            ui->labelEtat->setText("Echec de la synchronisation avec la base de données, vérifiez votre fichier choisi !");
            ui->labelEtat->setStyleSheet("color : red; font-weight: bold;");
            ui->labelEtat->setVisible(true);
        }
        //Une fois ma variable préparée ma progressBar prend la valeur 100%
    }
}

void MainWindow::on_actionOptions_triggered()
{
    Option gererOption;
    gererOption.exec();
}

void MainWindow::on_action_A_propos_du_BackOffice_triggered()
{
    aproposde infos;
    infos.exec();
}
