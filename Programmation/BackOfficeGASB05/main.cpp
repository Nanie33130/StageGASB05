#include "mainwindow.h"
#include "connexion.h"
#include "option.h"
#include "ajoutbdd.h"
#include "errorbdd.h"
#include "aproposde.h"
#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Création d'une QSqlDatabase maBase
    QSqlDatabase maBase;
    //Ajout d'une BDD QMYSQL3 à maBase
    maBase=QSqlDatabase::addDatabase("QMYSQL3");

    //Création d'une variable maConnexion
    connexion maConnexion;

    // On référence l'objet file au fichier
    QFile file("data.bdd");

    // Si valid == true, le fichier existe
    bool valid = file.exists();
    if (valid==1)
    {
        qDebug()<<"Existe";
        if (file.open(QFile::ReadOnly))
        {
            qDebug()<<"Ouvert";
            QTextStream in(&file);
            QStringList fileBDD;
            while (!in.atEnd())
            {
                QString ligneLue=in.readLine();
                fileBDD.append(ligneLue);
            }
            qDebug()<<fileBDD;
            QString Hote=fileBDD.value(0);
            QString UserName=fileBDD.value(1);
            QString Password=fileBDD.value(2);
            QString Database=fileBDD.value(3);
            qDebug()<<3;
            maBase.setHostName(Hote);
            maBase.setUserName(UserName);
            maBase.setPassword(Password);
            maBase.setDatabaseName(Database);
            maBase.open();
        }

    }
    else
    {
        ajoutBDD newBDD;
        qDebug()<<0;
        if(newBDD.exec()==QDialog::Accepted)
        {
            if (file.open(QFile::ReadOnly))
            {
                QTextStream in(&file);
                QStringList fileBDD;
                while (!in.atEnd())
                {
                    QString ligneLue=in.readLine();
                    fileBDD.append(ligneLue);
                    file.close();
                }
                qDebug()<<fileBDD;
                QString Hote=fileBDD.value(0);
                QString UserName=fileBDD.value(1);
                QString Password=fileBDD.value(2);
                QString Database=fileBDD.value(3);
                qDebug()<<3;
                maBase.setHostName(Hote);
                maBase.setUserName(UserName);
                maBase.setPassword(Password);
                maBase.setDatabaseName(Database);
                maBase.open();
            }
        }
    }

    if(maConnexion.exec()==QDialog::Accepted)
    {
        qDebug()<<1;
        MainWindow w(&maConnexion);
        w.show();
        return a.exec();
    }
    else
    {
        qDebug()<<2;
        return -124;
    }
}
