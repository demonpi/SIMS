/********************************************************************************
** Form generated from reading UI file 'ProjectAddEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTADDEVENT_H
#define UI_PROJECTADDEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProjectAddEvent
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QTextEdit *event_TE;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_PB;
    QPushButton *cancel_PB;

    void setupUi(QDialog *ProjectAddEvent)
    {
        if (ProjectAddEvent->objectName().isEmpty())
            ProjectAddEvent->setObjectName(QStringLiteral("ProjectAddEvent"));
        ProjectAddEvent->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(ProjectAddEvent);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(ProjectAddEvent);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        event_TE = new QTextEdit(ProjectAddEvent);
        event_TE->setObjectName(QStringLiteral("event_TE"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(event_TE->sizePolicy().hasHeightForWidth());
        event_TE->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, event_TE);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save_PB = new QPushButton(ProjectAddEvent);
        save_PB->setObjectName(QStringLiteral("save_PB"));

        horizontalLayout->addWidget(save_PB);

        cancel_PB = new QPushButton(ProjectAddEvent);
        cancel_PB->setObjectName(QStringLiteral("cancel_PB"));

        horizontalLayout->addWidget(cancel_PB);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ProjectAddEvent);

        QMetaObject::connectSlotsByName(ProjectAddEvent);
    } // setupUi

    void retranslateUi(QDialog *ProjectAddEvent)
    {
        ProjectAddEvent->setWindowTitle(QApplication::translate("ProjectAddEvent", "\346\267\273\345\212\240\351\241\271\347\233\256\344\272\213\344\273\266", nullptr));
        label->setText(QApplication::translate("ProjectAddEvent", "\344\272\213\344\273\266\346\217\217\350\277\260", nullptr));
        save_PB->setText(QApplication::translate("ProjectAddEvent", "\344\277\235\345\255\230", nullptr));
        cancel_PB->setText(QApplication::translate("ProjectAddEvent", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectAddEvent: public Ui_ProjectAddEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTADDEVENT_H
