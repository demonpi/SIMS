/********************************************************************************
** Form generated from reading UI file 'ProjectAdd.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTADD_H
#define UI_PROJECTADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectAdd
{
public:

    void setupUi(QWidget *ProjectAdd)
    {
        if (ProjectAdd->objectName().isEmpty())
            ProjectAdd->setObjectName(QStringLiteral("ProjectAdd"));
        ProjectAdd->resize(400, 300);

        retranslateUi(ProjectAdd);

        QMetaObject::connectSlotsByName(ProjectAdd);
    } // setupUi

    void retranslateUi(QWidget *ProjectAdd)
    {
        ProjectAdd->setWindowTitle(QApplication::translate("ProjectAdd", "ProjectAdd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectAdd: public Ui_ProjectAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTADD_H
