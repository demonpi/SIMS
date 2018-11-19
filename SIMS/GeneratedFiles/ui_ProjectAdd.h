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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectAdd
{
public:
    QFormLayout *formLayout;
    QTextEdit *desceribe_TE;
    QLineEdit *name_LE;
    QLabel *label;
    QLabel *label_2;
    QPushButton *add_PB;

    void setupUi(QWidget *ProjectAdd)
    {
        if (ProjectAdd->objectName().isEmpty())
            ProjectAdd->setObjectName(QStringLiteral("ProjectAdd"));
        ProjectAdd->resize(345, 250);
        formLayout = new QFormLayout(ProjectAdd);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        desceribe_TE = new QTextEdit(ProjectAdd);
        desceribe_TE->setObjectName(QStringLiteral("desceribe_TE"));

        formLayout->setWidget(1, QFormLayout::FieldRole, desceribe_TE);

        name_LE = new QLineEdit(ProjectAdd);
        name_LE->setObjectName(QStringLiteral("name_LE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_LE);

        label = new QLabel(ProjectAdd);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(ProjectAdd);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        add_PB = new QPushButton(ProjectAdd);
        add_PB->setObjectName(QStringLiteral("add_PB"));

        formLayout->setWidget(2, QFormLayout::FieldRole, add_PB);


        retranslateUi(ProjectAdd);

        QMetaObject::connectSlotsByName(ProjectAdd);
    } // setupUi

    void retranslateUi(QWidget *ProjectAdd)
    {
        ProjectAdd->setWindowTitle(QApplication::translate("ProjectAdd", "\345\242\236\345\212\240\351\241\271\347\233\256", nullptr));
        label->setText(QApplication::translate("ProjectAdd", "\351\241\271\347\233\256\345\220\215\347\247\260", nullptr));
        label_2->setText(QApplication::translate("ProjectAdd", "\351\241\271\347\233\256\346\217\217\350\277\260", nullptr));
        add_PB->setText(QApplication::translate("ProjectAdd", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectAdd: public Ui_ProjectAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTADD_H
