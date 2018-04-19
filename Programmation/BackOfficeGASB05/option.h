#ifndef OPTION_H
#define OPTION_H

#include <QDialog>
#include <QString>
#include <QFile>

namespace Ui {
class Option;
}

class Option : public QDialog
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = 0);
    ~Option();

private slots:
    void on_pushButtonQuitOption_clicked();

    void on_pushButtonShowPasswd_clicked();

    void on_pushButtonValidOption_clicked();

    void on_pushButtonChargeTable_clicked();

private:
    Ui::Option *ui;
    QString Hote;
    QString Username;
    QString Password;
    QString Database;
    QStringList Table;
    bool validTable;
};

#endif // OPTION_H
