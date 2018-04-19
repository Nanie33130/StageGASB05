#include "connexion.h"
#include "ui_connexion.h"

connexion::connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connexion)
{
    ui->setupUi(this);
    setWindowTitle("Connexion");
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
}

connexion::~connexion()
{
    delete ui;
}

void connexion::on_pushButtonCoConnexion_clicked()
{
    leLogin=ui->lineEditCoLogin->text();
    QString leMdp=ui->lineEditCoPasswd->text();
    if (leLogin=="admin")
    {
        if (leMdp=="adminGASB05")
        {
            accept();
        }
        else
        {
            ui->labelPasswd->setStyleSheet("color:red; font-weight:bold; ");
            ui->lineEditCoPasswd->clear();
        }
    }
    else
    {
        ui->labelLogin->setStyleSheet("color:red; font-weight:bold;");
        ui->labelPasswd->setStyleSheet("color:red; font-weight:bold;");
        ui->lineEditCoPasswd->clear();
        ui->lineEditCoLogin->clear();
    }
}

void connexion::on_pushButtonCoQuitter_clicked()
{
    this->close();
}
