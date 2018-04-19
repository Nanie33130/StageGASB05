#ifndef ERRORBDD_H
#define ERRORBDD_H

#include <QDialog>

namespace Ui {
class ErrorBDD;
}

class ErrorBDD : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorBDD(QWidget *parent = 0);
    ~ErrorBDD();

private slots:
    void on_pushButtonQuitter_clicked();

private:
    Ui::ErrorBDD *ui;
};

#endif // ERRORBDD_H
