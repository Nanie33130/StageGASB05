#include "ajoutbdd.h"
#include "ui_ajoutbdd.h"
#include "errorbdd.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QSqlDatabase>

ajoutBDD::ajoutBDD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajoutBDD)
{
    ui->setupUi(this);
    setWindowTitle("Ajout d'une Base de données");
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
}

ajoutBDD::~ajoutBDD()
{
    delete ui;
}

void ajoutBDD::on_pushButtonQuitter_clicked()
{
    this->close();
}

void ajoutBDD::on_pushButtonShowPasswdAjout_clicked()
{
    //Lorsque je clique sur le bouton
        //Si son mode d'affichage est Password
        if (ui->lineEditPasswordAjout->echoMode()==QLineEdit::Password)
        {
            //Alors le bouton change
            ui->pushButtonShowPasswdAjout->setText("Hide Password");
            //J'affiche le password du lineEdit
            ui->lineEditPasswordAjout->setEchoMode(QLineEdit::Normal);
        }
        //Sinon
        else
        {
            //Le bouton change
            ui->pushButtonShowPasswdAjout->setText("Show Password");
            //Je masque le password du lineEdit
            ui->lineEditPasswordAjout->setEchoMode(QLineEdit::Password);
        }
}

void ajoutBDD::on_pushButtonValiderAjout_clicked()
{
    Hote=ui->lineEditHoteAjout->text();
    Username=ui->lineEditUsernameAjout->text();
    Password=ui->lineEditPasswordAjout->text();
    Database=ui->lineEditDatabaseAjout->text();
    QFile file("data.bdd");
    QTextStream out(&file);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        out<<Hote<<endl<<Username<<endl<<Password<<endl<<Database;
        file.close();
        accept();
    }
    else
    {
        this->close();
        qDebug()<<"Non crée";
    }
}

void ajoutBDD::on_pushButtonChargeTableAjout_clicked()
{
    Hote=ui->lineEditHoteAjout->text();
    Username=ui->lineEditUsernameAjout->text();
    Password=ui->lineEditPasswordAjout->text();
    Database=ui->lineEditDatabaseAjout->text();
    QSqlDatabase::database().setHostName(Hote);
    QSqlDatabase::database().setUserName(Username);
    QSqlDatabase::database().setPassword(Password);
    QSqlDatabase::database().setDatabaseName(Database);
    if (QSqlDatabase::database().open())
    {
        QStringList listTable=QSqlDatabase::database().tables();
        int listTableTaille=listTable.size();
        for (int nTable=0; nTable<listTableTaille; nTable++)
        {
            ui->comboBoxTableAjout->addItem(listTable.value(nTable));
        }
        ui->pushButtonValiderAjout->setEnabled(true);
    }
    else
    {
        ui->pushButtonValiderAjout->setEnabled(false);
        ErrorBDD erreurdeBDD;
        erreurdeBDD.exec();
        qDebug()<<"Base non ouverte";
    }
}
