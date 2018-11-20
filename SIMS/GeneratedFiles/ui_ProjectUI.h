/********************************************************************************
** Form generated from reading UI file 'ProjectUI.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTUI_H
#define UI_PROJECTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectUI
{
public:
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *ProjectUI)
    {
        if (ProjectUI->objectName().isEmpty())
            ProjectUI->setObjectName(QStringLiteral("ProjectUI"));
        ProjectUI->resize(400, 300);
        horizontalLayout = new QHBoxLayout(ProjectUI);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        retranslateUi(ProjectUI);

        QMetaObject::connectSlotsByName(ProjectUI);
    } // setupUi

    void retranslateUi(QWidget *ProjectUI)
    {
        ProjectUI->setWindowTitle(QApplication::translate("ProjectUI", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectUI: public Ui_ProjectUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTUI_H
