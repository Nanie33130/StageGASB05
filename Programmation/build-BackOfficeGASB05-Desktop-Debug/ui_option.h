/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

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

class Ui_Option
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEditHoteOption;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEditUsernameOption;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEditPasswordOption;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonShowPasswd;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEditDatabaseOption;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_14;
    QComboBox *comboBoxTableOption;
    QPushButton *pushButtonChargeTable;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonValidOption;
    QPushButton *pushButtonQuitOption;

    void setupUi(QDialog *Option)
    {
        if (Option->objectName().isEmpty())
            Option->setObjectName(QStringLiteral("Option"));
        Option->resize(698, 505);
        verticalLayout = new QVBoxLayout(Option);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);

        label_5 = new QLabel(Option);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("ClearlyU PUA"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setWordWrap(true);

        horizontalLayout->addWidget(label_5);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 107, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(Option);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        lineEditHoteOption = new QLineEdit(Option);
        lineEditHoteOption->setObjectName(QStringLiteral("lineEditHoteOption"));

        gridLayout->addWidget(lineEditHoteOption, 0, 2, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 0, 3, 1, 1);

        label_2 = new QLabel(Option);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 1, 1, 1);

        lineEditUsernameOption = new QLineEdit(Option);
        lineEditUsernameOption->setObjectName(QStringLiteral("lineEditUsernameOption"));

        gridLayout->addWidget(lineEditUsernameOption, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 3, 1, 1);

        label_3 = new QLabel(Option);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 1, 1, 1);

        lineEditPasswordOption = new QLineEdit(Option);
        lineEditPasswordOption->setObjectName(QStringLiteral("lineEditPasswordOption"));
        lineEditPasswordOption->setFocusPolicy(Qt::WheelFocus);
        lineEditPasswordOption->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPasswordOption, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 3, 1, 1);

        pushButtonShowPasswd = new QPushButton(Option);
        pushButtonShowPasswd->setObjectName(QStringLiteral("pushButtonShowPasswd"));

        gridLayout->addWidget(pushButtonShowPasswd, 2, 4, 1, 1);

        label_4 = new QLabel(Option);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        lineEditDatabaseOption = new QLineEdit(Option);
        lineEditDatabaseOption->setObjectName(QStringLiteral("lineEditDatabaseOption"));

        gridLayout->addWidget(lineEditDatabaseOption, 3, 2, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 3, 3, 1, 1);

        label_6 = new QLabel(Option);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 4, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 4, 3, 1, 1);

        comboBoxTableOption = new QComboBox(Option);
        comboBoxTableOption->setObjectName(QStringLiteral("comboBoxTableOption"));

        gridLayout->addWidget(comboBoxTableOption, 4, 2, 1, 1);

        pushButtonChargeTable = new QPushButton(Option);
        pushButtonChargeTable->setObjectName(QStringLiteral("pushButtonChargeTable"));

        gridLayout->addWidget(pushButtonChargeTable, 4, 4, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 106, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButtonValidOption = new QPushButton(Option);
        pushButtonValidOption->setObjectName(QStringLiteral("pushButtonValidOption"));
        pushButtonValidOption->setEnabled(false);

        horizontalLayout_2->addWidget(pushButtonValidOption);

        pushButtonQuitOption = new QPushButton(Option);
        pushButtonQuitOption->setObjectName(QStringLiteral("pushButtonQuitOption"));

        horizontalLayout_2->addWidget(pushButtonQuitOption);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Option);

        QMetaObject::connectSlotsByName(Option);
    } // setupUi

    void retranslateUi(QDialog *Option)
    {
        Option->setWindowTitle(QApplication::translate("Option", "Dialog", 0));
        label_5->setText(QApplication::translate("Option", "Option Synchronisation Base de donn\303\251es", 0));
        label->setText(QApplication::translate("Option", "H\303\264te", 0));
        label_2->setText(QApplication::translate("Option", "UserName", 0));
        label_3->setText(QApplication::translate("Option", "PassWord", 0));
        pushButtonShowPasswd->setText(QApplication::translate("Option", "Show Password", 0));
        label_4->setText(QApplication::translate("Option", "Database", 0));
        label_6->setText(QApplication::translate("Option", "Table", 0));
        pushButtonChargeTable->setText(QApplication::translate("Option", "Load Table", 0));
        pushButtonValidOption->setText(QApplication::translate("Option", "Valider", 0));
        pushButtonQuitOption->setText(QApplication::translate("Option", "Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class Option: public Ui_Option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
