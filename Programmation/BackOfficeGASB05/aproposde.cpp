#include "aproposde.h"
#include "ui_aproposde.h"

aproposde::aproposde(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aproposde)
{
    ui->setupUi(this);
    setWindowTitle("A propos de ");
    setWindowIcon(QIcon(":/new/imgGASB05/imgGASB05/logoavecfond.png"));
}

aproposde::~aproposde()
{
    delete ui;
}

void aproposde::on_pushButton_clicked()
{
    this->close();
}
