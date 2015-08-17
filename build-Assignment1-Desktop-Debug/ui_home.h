/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *IDS;
    QPushButton *DLS;
    QLabel *AssignmentLogo;
    QPushButton *BFS;
    QLabel *AssignmentInfo;
    QPushButton *AssignmentTests;
    QPushButton *GenerateTree;
    QPushButton *ViewTree;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(645, 656);
        Home->setMinimumSize(QSize(0, 45));
        centralWidget = new QWidget(Home);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        IDS = new QPushButton(centralWidget);
        IDS->setObjectName(QStringLiteral("IDS"));
        IDS->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(IDS, 6, 0, 1, 1);

        DLS = new QPushButton(centralWidget);
        DLS->setObjectName(QStringLiteral("DLS"));
        DLS->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(DLS, 5, 0, 1, 1);

        AssignmentLogo = new QLabel(centralWidget);
        AssignmentLogo->setObjectName(QStringLiteral("AssignmentLogo"));
        AssignmentLogo->setPixmap(QPixmap(QString::fromUtf8(":/new/files/images/Assignment.jpg")));

        gridLayout->addWidget(AssignmentLogo, 0, 0, 1, 1);

        BFS = new QPushButton(centralWidget);
        BFS->setObjectName(QStringLiteral("BFS"));
        BFS->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(BFS, 4, 0, 1, 1);

        AssignmentInfo = new QLabel(centralWidget);
        AssignmentInfo->setObjectName(QStringLiteral("AssignmentInfo"));
        QFont font;
        font.setPointSize(16);
        AssignmentInfo->setFont(font);
        AssignmentInfo->setAlignment(Qt::AlignCenter);
        AssignmentInfo->setWordWrap(false);

        gridLayout->addWidget(AssignmentInfo, 1, 0, 1, 1);

        AssignmentTests = new QPushButton(centralWidget);
        AssignmentTests->setObjectName(QStringLiteral("AssignmentTests"));
        AssignmentTests->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(AssignmentTests, 7, 0, 1, 1);

        GenerateTree = new QPushButton(centralWidget);
        GenerateTree->setObjectName(QStringLiteral("GenerateTree"));
        GenerateTree->setMinimumSize(QSize(0, 45));
        GenerateTree->setIconSize(QSize(32, 32));

        gridLayout->addWidget(GenerateTree, 2, 0, 1, 1);

        ViewTree = new QPushButton(centralWidget);
        ViewTree->setObjectName(QStringLiteral("ViewTree"));
        ViewTree->setMinimumSize(QSize(0, 45));

        gridLayout->addWidget(ViewTree, 3, 0, 1, 1);

        Home->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Home);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Home->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Home);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Home->setStatusBar(statusBar);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", 0));
        IDS->setText(QApplication::translate("Home", "IDS", 0));
        DLS->setText(QApplication::translate("Home", "DLS", 0));
        AssignmentLogo->setText(QString());
        BFS->setText(QApplication::translate("Home", "BFS", 0));
        AssignmentInfo->setText(QApplication::translate("Home", " Artificial Intelligence \n"
" Uniformed Search Strategies \n"
" 8 Puzzle Type Problem", 0));
        AssignmentTests->setText(QApplication::translate("Home", "Assignment Tests", 0));
        GenerateTree->setText(QApplication::translate("Home", "Generate Tree", 0));
        ViewTree->setText(QApplication::translate("Home", "View Tree", 0));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
