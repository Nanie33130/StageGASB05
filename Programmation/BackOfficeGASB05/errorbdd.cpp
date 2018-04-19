#include "errorbdd.h"
#include "ui_errorbdd.h"

ErrorBDD::ErrorBDD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorBDD)
{
    ui->setupUi(this);
    setWindowTitle("Error");
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
}

ErrorBDD::~ErrorBDD()
{
    delete ui;
}

void ErrorBDD::on_pushButtonQuitter_clicked()
{
    this->close();
}
