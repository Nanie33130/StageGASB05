#ifndef AJOUTBDD_H
#define AJOUTBDD_H

#include <QDialog>

/**
 *\file ajoutbdd.h
 *\author Mélanie Lebeau
 *\version 0.2
 *\date 26 janvier 2018
 *\brief Créée un fichier "data.bdd".
 *\detail Cette classe se lance à la première utilisation de l'application, elle récupère des données d'accès à une base de données et les stockes dans un fichier "data.bdd qu'elle créée.
**/

namespace Ui {
class ajoutBDD;
}

class ajoutBDD : public QDialog
{
    Q_OBJECT

public:
    /**
         *\brief Constructeur
         *\detail Constructeur de la classe ajoutBDD
    **/
    explicit ajoutBDD(QWidget *parent = 0);
    ~ajoutBDD();

private slots:
    /**
         *\brief PushButton Quitter
         *\detail Quitte la fenêtre ajoutBDD
    **/
    void on_pushButtonQuitter_clicked();

    /**
         *\brief PushButton Montrer le Mot de Passe
         *\detail Affiche le mot de passe saisi et le re-cache.
    **/
    void on_pushButtonShowPasswdAjout_clicked();

    /**
         *\brief PushButton Valider la BDD saisie
         *\detail Créée un fichier contenant les données de connexion à la BDD saisie si elles sont correctes.
    **/
    void on_pushButtonValiderAjout_clicked();

    /**
         *\brief PushButton Charger le comboBox avec les tables de la BDD
         *\detail Récupère les tables de la BDD sélectionnées et les ajoutes dans la comboBox pour sélectionner la table dans laquelle insérer les données.
    **/
    void on_pushButtonChargeTableAjout_clicked();

private:
    Ui::ajoutBDD *ui;
    QString Hote;
    QString Username;
    QString Password;
    QString Database;
    QStringList Table;
};

#endif // AJOUTBDD_H
