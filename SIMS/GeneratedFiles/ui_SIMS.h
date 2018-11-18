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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIMSClass
{
public:
    QAction *project;
    QAction *software;
    QAction *account;
    QAction *log;
    QAction *statistics;
    QAction *dataStream;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *background_L;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *SIMSClass)
    {
        if (SIMSClass->objectName().isEmpty())
            SIMSClass->setObjectName(QStringLiteral("SIMSClass"));
        SIMSClass->resize(597, 400);
        project = new QAction(SIMSClass);
        project->setObjectName(QStringLiteral("project"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/project.png"), QSize(), QIcon::Normal, QIcon::Off);
        project->setIcon(icon);
        software = new QAction(SIMSClass);
        software->setObjectName(QStringLiteral("software"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/software.png"), QSize(), QIcon::Normal, QIcon::Off);
        software->setIcon(icon1);
        account = new QAction(SIMSClass);
        account->setObjectName(QStringLiteral("account"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/account.png"), QSize(), QIcon::Normal, QIcon::Off);
        account->setIcon(icon2);
        log = new QAction(SIMSClass);
        log->setObjectName(QStringLiteral("log"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/log.png"), QSize(), QIcon::Normal, QIcon::Off);
        log->setIcon(icon3);
        statistics = new QAction(SIMSClass);
        statistics->setObjectName(QStringLiteral("statistics"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/statistics.png"), QSize(), QIcon::Normal, QIcon::Off);
        statistics->setIcon(icon4);
        dataStream = new QAction(SIMSClass);
        dataStream->setObjectName(QStringLiteral("dataStream"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/dataStream.png"), QSize(), QIcon::Normal, QIcon::Off);
        dataStream->setIcon(icon5);
        centralWidget = new QWidget(SIMSClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        background_L = new QLabel(centralWidget);
        background_L->setObjectName(QStringLiteral("background_L"));

        horizontalLayout_2->addWidget(background_L);

        SIMSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SIMSClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 597, 18));
        SIMSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SIMSClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SIMSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(project);
        mainToolBar->addAction(software);
        mainToolBar->addSeparator();
        mainToolBar->addAction(log);
        mainToolBar->addAction(account);

        retranslateUi(SIMSClass);

        QMetaObject::connectSlotsByName(SIMSClass);
    } // setupUi

    void retranslateUi(QMainWindow *SIMSClass)
    {
        SIMSClass->setWindowTitle(QApplication::translate("SIMSClass", "SIMS", nullptr));
        project->setText(QApplication::translate("SIMSClass", "\351\241\271\347\233\256\347\256\241\347\220\206", nullptr));
        software->setText(QApplication::translate("SIMSClass", "\350\275\257\344\273\266\347\256\241\347\220\206", nullptr));
#ifndef QT_NO_TOOLTIP
        software->setToolTip(QApplication::translate("SIMSClass", "\350\275\257\344\273\266\347\256\241\347\220\206", nullptr));
#endif // QT_NO_TOOLTIP
        account->setText(QApplication::translate("SIMSClass", "\350\264\246\345\217\267", nullptr));
#ifndef QT_NO_TOOLTIP
        account->setToolTip(QApplication::translate("SIMSClass", "\350\264\246\345\217\267", nullptr));
#endif // QT_NO_TOOLTIP
        log->setText(QApplication::translate("SIMSClass", "\346\227\245\345\277\227", nullptr));
#ifndef QT_NO_TOOLTIP
        log->setToolTip(QApplication::translate("SIMSClass", "\346\227\245\345\277\227", nullptr));
#endif // QT_NO_TOOLTIP
        statistics->setText(QApplication::translate("SIMSClass", "\347\273\237\350\256\241", nullptr));
#ifndef QT_NO_TOOLTIP
        statistics->setToolTip(QApplication::translate("SIMSClass", "\347\273\237\350\256\241", nullptr));
#endif // QT_NO_TOOLTIP
        dataStream->setText(QApplication::translate("SIMSClass", "\344\277\241\346\201\257\346\265\201\350\256\276\350\256\241", nullptr));
#ifndef QT_NO_TOOLTIP
        dataStream->setToolTip(QApplication::translate("SIMSClass", "\344\277\241\346\201\257\346\265\201\350\256\276\350\256\241", nullptr));
#endif // QT_NO_TOOLTIP
        background_L->setText(QApplication::translate("SIMSClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SIMSClass: public Ui_SIMSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMS_H
