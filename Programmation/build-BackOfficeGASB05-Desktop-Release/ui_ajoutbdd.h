/********************************************************************************
** Form generated from reading UI file 'ajoutbdd.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTBDD_H
#define UI_AJOUTBDD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ajoutBDD
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEditHoteAjout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEditUsernameAjout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditPasswordAjout;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonShowPasswdAjout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditDatabaseAjout;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *comboBoxTableAjout;
    QPushButton *pushButtonChargeTableAjout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonValiderAjout;
    QPushButton *pushButtonQuitter;

    void setupUi(QDialog *ajoutBDD)
    {
        if (ajoutBDD->objectName().isEmpty())
            ajoutBDD->setObjectName(QStringLiteral("ajoutBDD"));
        ajoutBDD->resize(745, 498);
        verticalLayout = new QVBoxLayout(ajoutBDD);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(ajoutBDD);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("ClearlyU PUA"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ajoutBDD);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        lineEditHoteAjout = new QLineEdit(ajoutBDD);
        lineEditHoteAjout->setObjectName(QStringLiteral("lineEditHoteAjout"));

        gridLayout->addWidget(lineEditHoteAjout, 0, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 3, 1, 1);

        label_3 = new QLabel(ajoutBDD);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        lineEditUsernameAjout = new QLineEdit(ajoutBDD);
        lineEditUsernameAjout->setObjectName(QStringLiteral("lineEditUsernameAjout"));

        gridLayout->addWidget(lineEditUsernameAjout, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 3, 1, 1);

        label_4 = new QLabel(ajoutBDD);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        lineEditPasswordAjout = new QLineEdit(ajoutBDD);
        lineEditPasswordAjout->setObjectName(QStringLiteral("lineEditPasswordAjout"));
        lineEditPasswordAjout->setFocusPolicy(Qt::WheelFocus);
        lineEditPasswordAjout->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswordAjout, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 3, 1, 1);

        pushButtonShowPasswdAjout = new QPushButton(ajoutBDD);
        pushButtonShowPasswdAjout->setObjectName(QStringLiteral("pushButtonShowPasswdAjout"));

        gridLayout->addWidget(pushButtonShowPasswdAjout, 2, 4, 1, 1);

        label_5 = new QLabel(ajoutBDD);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        lineEditDatabaseAjout = new QLineEdit(ajoutBDD);
        lineEditDatabaseAjout->setObjectName(QStringLiteral("lineEditDatabaseAjout"));

        gridLayout->addWidget(lineEditDatabaseAjout, 3, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 3, 3, 1, 1);

        label_6 = new QLabel(ajoutBDD);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 4, 3, 1, 1);

        comboBoxTableAjout = new QComboBox(ajoutBDD);
        comboBoxTableAjout->setObjectName(QStringLiteral("comboBoxTableAjout"));

        gridLayout->addWidget(comboBoxTableAjout, 4, 2, 1, 1);

        pushButtonChargeTableAjout = new QPushButton(ajoutBDD);
        pushButtonChargeTableAjout->setObjectName(QStringLiteral("pushButtonChargeTableAjout"));

        gridLayout->addWidget(pushButtonChargeTableAjout, 4, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 93, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        pushButtonValiderAjout = new QPushButton(ajoutBDD);
        pushButtonValiderAjout->setObjectName(QStringLiteral("pushButtonValiderAjout"));
        pushButtonValiderAjout->setEnabled(false);

        horizontalLayout->addWidget(pushButtonValiderAjout);

        pushButtonQuitter = new QPushButton(ajoutBDD);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));

        horizontalLayout->addWidget(pushButtonQuitter);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ajoutBDD);

        QMetaObject::connectSlotsByName(ajoutBDD);
    } // setupUi

    void retranslateUi(QDialog *ajoutBDD)
    {
        ajoutBDD->setWindowTitle(QApplication::translate("ajoutBDD", "Dialog", 0));
        label->setText(QApplication::translate("ajoutBDD", "Ajout de la Base de Donn\303\251es", 0));
        label_2->setText(QApplication::translate("ajoutBDD", "H\303\264te", 0));
        label_3->setText(QApplication::translate("ajoutBDD", "UserName", 0));
        label_4->setText(QApplication::translate("ajoutBDD", "PassWord", 0));
        pushButtonShowPasswdAjout->setText(QApplication::translate("ajoutBDD", "Show Password", 0));
        label_5->setText(QApplication::translate("ajoutBDD", "Database", 0));
        label_6->setText(QApplication::translate("ajoutBDD", "Table", 0));
        pushButtonChargeTableAjout->setText(QApplication::translate("ajoutBDD", "Load Table", 0));
        pushButtonValiderAjout->setText(QApplication::translate("ajoutBDD", "&Valider", 0));
        pushButtonQuitter->setText(QApplication::translate("ajoutBDD", "&Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class ajoutBDD: public Ui_ajoutBDD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTBDD_H
