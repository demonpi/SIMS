/********************************************************************************
** Form generated from reading UI file 'ProjectList.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTLIST_H
#define UI_PROJECTLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectList
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name_LE;
    QPushButton *add_PB;
    QListView *project_LV;

    void setupUi(QWidget *ProjectList)
    {
        if (ProjectList->objectName().isEmpty())
            ProjectList->setObjectName(QStringLiteral("ProjectList"));
        ProjectList->resize(429, 421);
        verticalLayout = new QVBoxLayout(ProjectList);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        name_LE = new QLineEdit(ProjectList);
        name_LE->setObjectName(QStringLiteral("name_LE"));

        horizontalLayout->addWidget(name_LE);

        add_PB = new QPushButton(ProjectList);
        add_PB->setObjectName(QStringLiteral("add_PB"));

        horizontalLayout->addWidget(add_PB);


        verticalLayout->addLayout(horizontalLayout);

        project_LV = new QListView(ProjectList);
        project_LV->setObjectName(QStringLiteral("project_LV"));

        verticalLayout->addWidget(project_LV);


        retranslateUi(ProjectList);

        QMetaObject::connectSlotsByName(ProjectList);
    } // setupUi

    void retranslateUi(QWidget *ProjectList)
    {
        ProjectList->setWindowTitle(QApplication::translate("ProjectList", "\351\241\271\347\233\256\345\210\227\350\241\250", nullptr));
        add_PB->setText(QApplication::translate("ProjectList", "\345\242\236\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectList: public Ui_ProjectList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTLIST_H
