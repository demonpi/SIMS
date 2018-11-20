/********************************************************************************
** Form generated from reading UI file 'ProjectSoftwareWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSOFTWAREWIDGET_H
#define UI_PROJECTSOFTWAREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectSoftwareWidget
{
public:

    void setupUi(QWidget *ProjectSoftwareWidget)
    {
        if (ProjectSoftwareWidget->objectName().isEmpty())
            ProjectSoftwareWidget->setObjectName(QStringLiteral("ProjectSoftwareWidget"));
        ProjectSoftwareWidget->resize(400, 300);

        retranslateUi(ProjectSoftwareWidget);

        QMetaObject::connectSlotsByName(ProjectSoftwareWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectSoftwareWidget)
    {
        ProjectSoftwareWidget->setWindowTitle(QApplication::translate("ProjectSoftwareWidget", "ProjectSoftwareWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectSoftwareWidget: public Ui_ProjectSoftwareWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSOFTWAREWIDGET_H
