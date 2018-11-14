/********************************************************************************
** Form generated from reading UI file 'SIMS.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMS_H
#define UI_SIMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIMSClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SIMSClass)
    {
        if (SIMSClass->objectName().isEmpty())
            SIMSClass->setObjectName(QStringLiteral("SIMSClass"));
        SIMSClass->resize(600, 400);
        menuBar = new QMenuBar(SIMSClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SIMSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SIMSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SIMSClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SIMSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SIMSClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SIMSClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SIMSClass->setStatusBar(statusBar);

        retranslateUi(SIMSClass);

        QMetaObject::connectSlotsByName(SIMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *SIMSClass)
    {
        SIMSClass->setWindowTitle(QApplication::translate("SIMSClass", "SIMS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SIMSClass: public Ui_SIMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMS_H
