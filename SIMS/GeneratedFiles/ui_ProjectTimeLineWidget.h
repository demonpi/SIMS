/********************************************************************************
** Form generated from reading UI file 'ProjectTimeLineWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTTIMELINEWIDGET_H
#define UI_PROJECTTIMELINEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectTimeLineWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *time_L;
    QTextBrowser *content_TB;

    void setupUi(QWidget *ProjectTimeLineWidget)
    {
        if (ProjectTimeLineWidget->objectName().isEmpty())
            ProjectTimeLineWidget->setObjectName(QStringLiteral("ProjectTimeLineWidget"));
        ProjectTimeLineWidget->resize(416, 300);
        verticalLayout_2 = new QVBoxLayout(ProjectTimeLineWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, 0, 0);
        groupBox = new QGroupBox(ProjectTimeLineWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        time_L = new QLabel(groupBox);
        time_L->setObjectName(QStringLiteral("time_L"));

        verticalLayout_3->addWidget(time_L);

        content_TB = new QTextBrowser(groupBox);
        content_TB->setObjectName(QStringLiteral("content_TB"));

        verticalLayout_3->addWidget(content_TB);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(ProjectTimeLineWidget);

        QMetaObject::connectSlotsByName(ProjectTimeLineWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectTimeLineWidget)
    {
        ProjectTimeLineWidget->setWindowTitle(QApplication::translate("ProjectTimeLineWidget", "ProjectTimeLineWidget", nullptr));
        groupBox->setTitle(QString());
        time_L->setText(QApplication::translate("ProjectTimeLineWidget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectTimeLineWidget: public Ui_ProjectTimeLineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTTIMELINEWIDGET_H
