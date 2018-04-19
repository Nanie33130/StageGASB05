#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "connexion.h"
#include "option.h"
#include <QMainWindow>
#include <QSqlError>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(connexion *laConnexion, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButtonOuvrir_clicked();

    void on_pushButtonQuitterAppli_clicked();

    void on_pushButtonSynchro_clicked();

    void on_actionOptions_triggered();

    void on_action_A_propos_du_BackOffice_triggered();

private:
    Ui::MainWindow *ui;
    connexion *uneConnexion;
    QString nomFichier;
    QString requeteComplete;
    int nbrLine;
};

#endif // MAINWINDOW_H
