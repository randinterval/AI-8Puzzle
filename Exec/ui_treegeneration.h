/********************************************************************************
** Form generated from reading UI file 'treegeneration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEGENERATION_H
#define UI_TREEGENERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TreeGeneration
{
public:
    QGridLayout *gridLayout;
    QLabel *r1c1;
    QLabel *r1c2;
    QLabel *r2c0;
    QLabel *gtdglbl;
    QPushButton *GenerateTreeDepth;
    QPushButton *GenerateTreeGoal;
    QLabel *r2c1;
    QSpinBox *depthvalue;
    QLabel *r2c2;
    QLabel *gtcdlbl;
    QLabel *r1c0;
    QLabel *r0c0;
    QLabel *r0c1;
    QLabel *r0c2;
    QLabel *instatelabel;
    QPushButton *randomize;

    void setupUi(QDialog *TreeGeneration)
    {
        if (TreeGeneration->objectName().isEmpty())
            TreeGeneration->setObjectName(QStringLiteral("TreeGeneration"));
        TreeGeneration->resize(539, 378);
        gridLayout = new QGridLayout(TreeGeneration);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        r1c1 = new QLabel(TreeGeneration);
        r1c1->setObjectName(QStringLiteral("r1c1"));
        r1c1->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r1c1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r1c1, 3, 1, 1, 1);

        r1c2 = new QLabel(TreeGeneration);
        r1c2->setObjectName(QStringLiteral("r1c2"));
        r1c2->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r1c2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r1c2, 3, 2, 1, 1);

        r2c0 = new QLabel(TreeGeneration);
        r2c0->setObjectName(QStringLiteral("r2c0"));
        r2c0->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r2c0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r2c0, 4, 0, 1, 1);

        gtdglbl = new QLabel(TreeGeneration);
        gtdglbl->setObjectName(QStringLiteral("gtdglbl"));

        gridLayout->addWidget(gtdglbl, 10, 1, 1, 1);

        GenerateTreeDepth = new QPushButton(TreeGeneration);
        GenerateTreeDepth->setObjectName(QStringLiteral("GenerateTreeDepth"));

        gridLayout->addWidget(GenerateTreeDepth, 9, 1, 1, 1);

        GenerateTreeGoal = new QPushButton(TreeGeneration);
        GenerateTreeGoal->setObjectName(QStringLiteral("GenerateTreeGoal"));

        gridLayout->addWidget(GenerateTreeGoal, 13, 1, 1, 1);

        r2c1 = new QLabel(TreeGeneration);
        r2c1->setObjectName(QStringLiteral("r2c1"));
        r2c1->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r2c1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r2c1, 4, 1, 1, 1);

        depthvalue = new QSpinBox(TreeGeneration);
        depthvalue->setObjectName(QStringLiteral("depthvalue"));

        gridLayout->addWidget(depthvalue, 8, 0, 1, 3);

        r2c2 = new QLabel(TreeGeneration);
        r2c2->setObjectName(QStringLiteral("r2c2"));
        r2c2->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r2c2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r2c2, 4, 2, 1, 1);

        gtcdlbl = new QLabel(TreeGeneration);
        gtcdlbl->setObjectName(QStringLiteral("gtcdlbl"));
        gtcdlbl->setStyleSheet(QLatin1String("border{\n"
"1 px solid black;\n"
"}"));

        gridLayout->addWidget(gtcdlbl, 6, 1, 1, 1);

        r1c0 = new QLabel(TreeGeneration);
        r1c0->setObjectName(QStringLiteral("r1c0"));
        r1c0->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r1c0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r1c0, 3, 0, 1, 1);

        r0c0 = new QLabel(TreeGeneration);
        r0c0->setObjectName(QStringLiteral("r0c0"));
        r0c0->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r0c0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r0c0, 1, 0, 1, 1);

        r0c1 = new QLabel(TreeGeneration);
        r0c1->setObjectName(QStringLiteral("r0c1"));
        r0c1->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r0c1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r0c1, 1, 1, 1, 1);

        r0c2 = new QLabel(TreeGeneration);
        r0c2->setObjectName(QStringLiteral("r0c2"));
        r0c2->setStyleSheet(QLatin1String("border: 6px solid black;\n"
"background: white;"));
        r0c2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(r0c2, 1, 2, 1, 1);

        instatelabel = new QLabel(TreeGeneration);
        instatelabel->setObjectName(QStringLiteral("instatelabel"));
        instatelabel->setStyleSheet(QLatin1String("border: 5px solid white;\n"
"color: white;\n"
"background: black;"));
        instatelabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(instatelabel, 0, 1, 1, 1);

        randomize = new QPushButton(TreeGeneration);
        randomize->setObjectName(QStringLiteral("randomize"));

        gridLayout->addWidget(randomize, 5, 1, 1, 1);


        retranslateUi(TreeGeneration);

        QMetaObject::connectSlotsByName(TreeGeneration);
    } // setupUi

    void retranslateUi(QDialog *TreeGeneration)
    {
        TreeGeneration->setWindowTitle(QApplication::translate("TreeGeneration", "Dialog", 0));
        r1c1->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r1c2->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r2c0->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        gtdglbl->setText(QApplication::translate("TreeGeneration", "Generate Tree Until Goal Node Generated", 0));
        GenerateTreeDepth->setText(QApplication::translate("TreeGeneration", "Generate", 0));
        GenerateTreeGoal->setText(QApplication::translate("TreeGeneration", "Generate", 0));
        r2c1->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r2c2->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        gtcdlbl->setText(QApplication::translate("TreeGeneration", "Generate Tree of Certain Depth", 0));
        r1c0->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r0c0->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r0c1->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        r0c2->setText(QApplication::translate("TreeGeneration", "TextLabel", 0));
        instatelabel->setText(QApplication::translate("TreeGeneration", "Initial State", 0));
        randomize->setText(QApplication::translate("TreeGeneration", "Randomize", 0));
    } // retranslateUi

};

namespace Ui {
    class TreeGeneration: public Ui_TreeGeneration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEGENERATION_H
