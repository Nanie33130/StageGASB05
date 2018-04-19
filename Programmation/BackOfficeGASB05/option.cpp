#include "option.h"
#include "ui_option.h"
#include "errorbdd.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QFile>
#include <QTextStream>

Option::Option(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);
    //Settings de base
    QFile file("data.bdd");
    if (file.open(QFile::ReadOnly))
    {
        QTextStream in(&file);
        QStringList fileBDDOption;
        while (!in.atEnd()) {
            QString ligneLue=in.readLine();
            fileBDDOption.append(ligneLue);
        }
        Hote=fileBDDOption.value(0);
        Username=fileBDDOption.value(1);
        Password=fileBDDOption.value(2);
        Database=fileBDDOption.value(3);
        //Table=QSqlDatabase::database().tables();

    }
    qDebug()<<Table;
    int nbrTable=Table.count();
    qDebug()<<nbrTable;
    for (int compteurTable=0; compteurTable<nbrTable; compteurTable++)
    {
        ui->comboBoxTableOption->addItem(Table[compteurTable]);
    }

    ui->lineEditHoteOption->setText(Hote);
    ui->lineEditUsernameOption->setText(Username);
    ui->lineEditPasswordOption->setText(Password);
    ui->lineEditDatabaseOption->setText(Database);
    validTable==0;
    setWindowTitle("Option");
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
}

Option::~Option()
{
    delete ui;
}

void Option::on_pushButtonQuitOption_clicked()
{
    this->close();
}


void Option::on_pushButtonShowPasswd_clicked()
{
//Lorsque je clique sur le bouton
    //Si son mode d'affichage est Password
    if (ui->lineEditPasswordOption->echoMode()==QLineEdit::Password)
    {
        //Alors le bouton change
        ui->pushButtonShowPasswd->setText("Hide Password");
        //J'affiche le password du lineEdit
        ui->lineEditPasswordOption->setEchoMode(QLineEdit::Normal);
    }
    //Sinon
    else
    {
        //Le bouton change
        ui->pushButtonShowPasswd->setText("Show Password");
        //Je masque le password du lineEdit
        ui->lineEditPasswordOption->setEchoMode(QLineEdit::Password);
    }
}

void Option::on_pushButtonValidOption_clicked()
{
    Hote=ui->lineEditHoteOption->text();
    Username=ui->lineEditUsernameOption->text();
    Password=ui->lineEditPasswordOption->text();
    Database=ui->lineEditDatabaseOption->text();
    //Table="";
    QFile file("data.bdd");
    QTextStream out(&file);
    file.remove();
    if (file.open(QFile::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"Fichier Ouvert";

        out<<Hote<<endl<<Username<<endl<<Password<<endl<<Database;
        file.close();
        qDebug()<<"Fichier écrit";
        accept();
    }
    else
    {
        qDebug()<<"Fichier non ouvert";
    }
    QSqlDatabase::database().setHostName(Hote);
    QSqlDatabase::database().setUserName(Username);
    QSqlDatabase::database().setPassword(Password);
    QSqlDatabase::database().setDatabaseName(Database);
    if (QSqlDatabase::database().open())
    {
        this->close();
    }
    else
    {
        ErrorBDD erreurdeBDD;
        erreurdeBDD.exec();
        qDebug()<<"Base non ouverte";
    }
}

void Option::on_pushButtonChargeTable_clicked()
{
    Hote=ui->lineEditHoteOption->text();
    Username=ui->lineEditUsernameOption->text();
    Password=ui->lineEditPasswordOption->text();
    Database=ui->lineEditDatabaseOption->text();
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
            ui->comboBoxTableOption->addItem(listTable.value(nTable));
        }
        ui->pushButtonValidOption->setEnabled(true);
    }
    else
    {
        ui->pushButtonValidOption->setEnabled(false);
        ErrorBDD erreurdeBDD;
        erreurdeBDD.exec();
        qDebug()<<"Base non ouverte";
    }
}
