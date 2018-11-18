/********************************************************************************
** Form generated from reading UI file 'Login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *username_LE;
    QLineEdit *password_LE;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *comfirm_PB;
    QPushButton *cancel_PB;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(375, 164);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        username_LE = new QLineEdit(LoginDialog);
        username_LE->setObjectName(QStringLiteral("username_LE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username_LE);

        password_LE = new QLineEdit(LoginDialog);
        password_LE->setObjectName(QStringLiteral("password_LE"));
        password_LE->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password_LE);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comfirm_PB = new QPushButton(LoginDialog);
        comfirm_PB->setObjectName(QStringLiteral("comfirm_PB"));

        horizontalLayout->addWidget(comfirm_PB);

        cancel_PB = new QPushButton(LoginDialog);
        cancel_PB->setObjectName(QStringLiteral("cancel_PB"));

        horizontalLayout->addWidget(cancel_PB);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", nullptr));
        comfirm_PB->setText(QApplication::translate("LoginDialog", "\347\241\256\350\256\244", nullptr));
        cancel_PB->setText(QApplication::translate("LoginDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
