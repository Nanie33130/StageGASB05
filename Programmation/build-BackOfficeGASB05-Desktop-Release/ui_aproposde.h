/********************************************************************************
** Form generated from reading UI file 'aproposde.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APROPOSDE_H
#define UI_APROPOSDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_aproposde
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton;

    void setupUi(QDialog *aproposde)
    {
        if (aproposde->objectName().isEmpty())
            aproposde->setObjectName(QStringLiteral("aproposde"));
        aproposde->resize(769, 504);
        aproposde->setMinimumSize(QSize(569, 304));
        verticalLayout = new QVBoxLayout(aproposde);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(aproposde);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(318, 140));
        QFont font;
        font.setFamily(QStringLiteral("ClearlyU PUA"));
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_3->setWordWrap(true);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(aproposde);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(241, 251));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/imgGASB05/imgGASB05/logoavecfond.png")));
        label_2->setScaledContents(true);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label = new QLabel(aproposde);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButton = new QPushButton(aproposde);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(85, 31));

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(aproposde);

        QMetaObject::connectSlotsByName(aproposde);
    } // setupUi

    void retranslateUi(QDialog *aproposde)
    {
        aproposde->setWindowTitle(QApplication::translate("aproposde", "Dialog", 0));
        label_3->setText(QApplication::translate("aproposde", "A propos du BackOffice GASB05", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("aproposde", "Ce logiciel est la version 0.2 du backOffice du GASB05 \n"
" Il a \303\251t\303\251 cr\303\251e par M\303\251lanie Lebeau, \303\251tudiante en BST SIO deuxi\303\250me ann\303\251e durant son stage en 2018.\n"
" La derni\303\250re mise \303\240 jour date de f\303\251vrier 2018.", 0));
        pushButton->setText(QApplication::translate("aproposde", "&Quitter", 0));
    } // retranslateUi

};

namespace Ui {
    class aproposde: public Ui_aproposde {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APROPOSDE_H
