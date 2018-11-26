/********************************************************************************
** Form generated from reading UI file 'ProjectDataStreamWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDATASTREAMWIDGET_H
#define UI_PROJECTDATASTREAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDataStreamWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *save_PB;
    QPushButton *preview_PB;
    QToolBox *toolBox;
    QWidget *software_W;
    QWidget *connect_W;
    QWidget *assist_W;
    QGraphicsView *graphicsView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *page_2;

    void setupUi(QWidget *ProjectDataStreamWidget)
    {
        if (ProjectDataStreamWidget->objectName().isEmpty())
            ProjectDataStreamWidget->setObjectName(QStringLiteral("ProjectDataStreamWidget"));
        ProjectDataStreamWidget->resize(1600, 900);
        horizontalLayout = new QHBoxLayout(ProjectDataStreamWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        save_PB = new QPushButton(ProjectDataStreamWidget);
        save_PB->setObjectName(QStringLiteral("save_PB"));

        horizontalLayout_2->addWidget(save_PB);

        preview_PB = new QPushButton(ProjectDataStreamWidget);
        preview_PB->setObjectName(QStringLiteral("preview_PB"));

        horizontalLayout_2->addWidget(preview_PB);


        verticalLayout->addLayout(horizontalLayout_2);

        toolBox = new QToolBox(ProjectDataStreamWidget);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        software_W = new QWidget();
        software_W->setObjectName(QStringLiteral("software_W"));
        software_W->setGeometry(QRect(0, 0, 156, 800));
        toolBox->addItem(software_W, QString::fromUtf8("\350\275\257\344\273\266"));
        connect_W = new QWidget();
        connect_W->setObjectName(QStringLiteral("connect_W"));
        connect_W->setGeometry(QRect(0, 0, 156, 800));
        toolBox->addItem(connect_W, QString::fromUtf8("\351\200\232\344\277\241\346\216\245\345\217\243"));
        assist_W = new QWidget();
        assist_W->setObjectName(QStringLiteral("assist_W"));
        toolBox->addItem(assist_W, QString::fromUtf8("\347\273\230\345\233\276\350\276\205\345\212\251"));

        verticalLayout->addWidget(toolBox);


        horizontalLayout->addLayout(verticalLayout);

        graphicsView = new QGraphicsView(ProjectDataStreamWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        stackedWidget = new QStackedWidget(ProjectDataStreamWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 314, 886));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 7);
        horizontalLayout->setStretch(2, 2);

        retranslateUi(ProjectDataStreamWidget);

        toolBox->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectDataStreamWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectDataStreamWidget)
    {
        ProjectDataStreamWidget->setWindowTitle(QApplication::translate("ProjectDataStreamWidget", "ProjectDataStreamWidget", nullptr));
        save_PB->setText(QApplication::translate("ProjectDataStreamWidget", "\344\277\235\345\255\230", nullptr));
        preview_PB->setText(QApplication::translate("ProjectDataStreamWidget", "\346\227\266\345\272\217\351\242\204\350\247\210", nullptr));
        toolBox->setItemText(toolBox->indexOf(software_W), QApplication::translate("ProjectDataStreamWidget", "\350\275\257\344\273\266", nullptr));
        toolBox->setItemText(toolBox->indexOf(connect_W), QApplication::translate("ProjectDataStreamWidget", "\351\200\232\344\277\241\346\216\245\345\217\243", nullptr));
        toolBox->setItemText(toolBox->indexOf(assist_W), QApplication::translate("ProjectDataStreamWidget", "\347\273\230\345\233\276\350\276\205\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectDataStreamWidget: public Ui_ProjectDataStreamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDATASTREAMWIDGET_H
