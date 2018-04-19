/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_connexion
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditCoLogin;
    QLabel *labelPasswd;
    QLineEdit *lineEditCoPasswd;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonCoConnexion;
    QPushButton *pushButtonCoQuitter;

    void setupUi(QDialog *connexion)
    {
        if (connexion->objectName().isEmpty())
            connexion->setObjectName(QStringLiteral("connexion"));
        connexion->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(connexion);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(connexion);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("cmr10"));
        font.setPointSize(15);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelLogin = new QLabel(connexion);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));
        QFont font1;
        font1.setFamily(QStringLiteral("cmr10"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        labelLogin->setFont(font1);

        verticalLayout->addWidget(labelLogin);

        lineEditCoLogin = new QLineEdit(connexion);
        lineEditCoLogin->setObjectName(QStringLiteral("lineEditCoLogin"));
        QFont font2;
        font2.setFamily(QStringLiteral("cmr10"));
        font2.setPointSize(12);
        lineEditCoLogin->setFont(font2);

        verticalLayout->addWidget(lineEditCoLogin);

        labelPasswd = new QLabel(connexion);
        labelPasswd->setObjectName(QStringLiteral("labelPasswd"));
        labelPasswd->setFont(font1);

        verticalLayout->addWidget(labelPasswd);

        lineEditCoPasswd = new QLineEdit(connexion);
        lineEditCoPasswd->setObjectName(QStringLiteral("lineEditCoPasswd"));
        lineEditCoPasswd->setFont(font2);
        lineEditCoPasswd->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditCoPasswd);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 42, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonCoConnexion = new QPushButton(connexion);
        pushButtonCoConnexion->setObjectName(QStringLiteral("pushButtonCoConnexion"));
        QFont font3;
        font3.setFamily(QStringLiteral("cmr10"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pushButtonCoConnexion->setFont(font3);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/imgGASB05/imgGASB05/iconebonhomme.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCoConnexion->setIcon(icon);

        horizontalLayout->addWidget(pushButtonCoConnexion);

        pushButtonCoQuitter = new QPushButton(connexion);
        pushButtonCoQuitter->setObjectName(QStringLiteral("pushButtonCoQuitter"));
        pushButtonCoQuitter->setFont(font3);

        horizontalLayout->addWidget(pushButtonCoQuitter);


        verticalLayout_2->addLayout(horizontalLayout);

        QWidget::setTabOrder(lineEditCoLogin, lineEditCoPasswd);
        QWidget::setTabOrder(lineEditCoPasswd, pushButtonCoConnexion);
        QWidget::setTabOrder(pushButtonCoConnexion, pushButtonCoQuitter);

        retranslateUi(connexion);

        QMetaObject::connectSlotsByName(connexion);
    } // setupUi

    void retranslateUi(QDialog *connexion)
    {
        connexion->setWindowTitle(QApplication::translate("connexion", "Dialog", 0));
        label->setText(QApplication::translate("connexion", "Connexion", 0));
        labelLogin->setText(QApplication::translate("connexion", "Login", 0));
        lineEditCoLogin->setText(QApplication::translate("connexion", "admin", 0));
        labelPasswd->setText(QApplication::translate("connexion", "Password", 0));
        lineEditCoPasswd->setText(QApplication::translate("connexion", "adminGASB05", 0));
        pushButtonCoConnexion->setText(QApplication::translate("connexion", "&Connexion", 0));
        pushButtonCoQuitter->setText(QApplication::translate("connexion", "&Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class connexion: public Ui_connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
