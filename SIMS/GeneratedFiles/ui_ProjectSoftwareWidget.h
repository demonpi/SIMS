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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectSoftwareWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filter_LE;
    QTableView *main_TB;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *export_PB;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_PB;
    QPushButton *edit_PB;
    QPushButton *delete_PB;

    void setupUi(QWidget *ProjectSoftwareWidget)
    {
        if (ProjectSoftwareWidget->objectName().isEmpty())
            ProjectSoftwareWidget->setObjectName(QStringLiteral("ProjectSoftwareWidget"));
        ProjectSoftwareWidget->resize(1600, 900);
        verticalLayout_2 = new QVBoxLayout(ProjectSoftwareWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        filter_LE = new QLineEdit(ProjectSoftwareWidget);
        filter_LE->setObjectName(QStringLiteral("filter_LE"));

        horizontalLayout->addWidget(filter_LE);


        verticalLayout_2->addLayout(horizontalLayout);

        main_TB = new QTableView(ProjectSoftwareWidget);
        main_TB->setObjectName(QStringLiteral("main_TB"));

        verticalLayout_2->addWidget(main_TB);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        export_PB = new QPushButton(ProjectSoftwareWidget);
        export_PB->setObjectName(QStringLiteral("export_PB"));

        horizontalLayout_2->addWidget(export_PB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_PB = new QPushButton(ProjectSoftwareWidget);
        add_PB->setObjectName(QStringLiteral("add_PB"));

        horizontalLayout_2->addWidget(add_PB);

        edit_PB = new QPushButton(ProjectSoftwareWidget);
        edit_PB->setObjectName(QStringLiteral("edit_PB"));

        horizontalLayout_2->addWidget(edit_PB);

        delete_PB = new QPushButton(ProjectSoftwareWidget);
        delete_PB->setObjectName(QStringLiteral("delete_PB"));

        horizontalLayout_2->addWidget(delete_PB);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(ProjectSoftwareWidget);

        QMetaObject::connectSlotsByName(ProjectSoftwareWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectSoftwareWidget)
    {
        ProjectSoftwareWidget->setWindowTitle(QApplication::translate("ProjectSoftwareWidget", "ProjectSoftwareWidget", nullptr));
        filter_LE->setPlaceholderText(QApplication::translate("ProjectSoftwareWidget", "\350\276\223\345\205\245\350\275\257\344\273\266\345\220\215\350\277\207\346\273\244", nullptr));
        export_PB->setText(QApplication::translate("ProjectSoftwareWidget", "\345\257\274\345\207\272", nullptr));
        add_PB->setText(QApplication::translate("ProjectSoftwareWidget", "\345\242\236\345\212\240", nullptr));
        edit_PB->setText(QApplication::translate("ProjectSoftwareWidget", "\347\274\226\350\276\221", nullptr));
        delete_PB->setText(QApplication::translate("ProjectSoftwareWidget", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectSoftwareWidget: public Ui_ProjectSoftwareWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSOFTWAREWIDGET_H
