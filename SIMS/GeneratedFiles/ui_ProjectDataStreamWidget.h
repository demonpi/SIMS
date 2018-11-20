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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDataStreamWidget
{
public:

    void setupUi(QWidget *ProjectDataStreamWidget)
    {
        if (ProjectDataStreamWidget->objectName().isEmpty())
            ProjectDataStreamWidget->setObjectName(QStringLiteral("ProjectDataStreamWidget"));
        ProjectDataStreamWidget->resize(400, 300);

        retranslateUi(ProjectDataStreamWidget);

        QMetaObject::connectSlotsByName(ProjectDataStreamWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectDataStreamWidget)
    {
        ProjectDataStreamWidget->setWindowTitle(QApplication::translate("ProjectDataStreamWidget", "ProjectDataStreamWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectDataStreamWidget: public Ui_ProjectDataStreamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDATASTREAMWIDGET_H
