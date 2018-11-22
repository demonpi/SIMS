/********************************************************************************
** Form generated from reading UI file 'ProjectInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTINFOWIDGET_H
#define UI_PROJECTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectInfoWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *name_LE;
    QLabel *label_3;
    QTextEdit *describe_TE;
    QSpacerItem *verticalSpacer;
    QPushButton *edit_PB;
    QPushButton *save_PB;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QScrollArea *timeline_SA;
    QWidget *timeline_SA_Widget;
    QVBoxLayout *timeline_SA_Layout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_PB;
    QPushButton *remove_PB;

    void setupUi(QWidget *ProjectInfoWidget)
    {
        if (ProjectInfoWidget->objectName().isEmpty())
            ProjectInfoWidget->setObjectName(QStringLiteral("ProjectInfoWidget"));
        ProjectInfoWidget->resize(1486, 900);
        horizontalLayout = new QHBoxLayout(ProjectInfoWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(ProjectInfoWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        name_LE = new QLineEdit(ProjectInfoWidget);
        name_LE->setObjectName(QStringLiteral("name_LE"));
        name_LE->setMinimumSize(QSize(0, 19));
        name_LE->setReadOnly(true);

        verticalLayout_3->addWidget(name_LE);

        label_3 = new QLabel(ProjectInfoWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        describe_TE = new QTextEdit(ProjectInfoWidget);
        describe_TE->setObjectName(QStringLiteral("describe_TE"));
        describe_TE->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(describe_TE->sizePolicy().hasHeightForWidth());
        describe_TE->setSizePolicy(sizePolicy1);
        describe_TE->setMinimumSize(QSize(0, 600));
        describe_TE->setMaximumSize(QSize(16777215, 16777215));
        describe_TE->setReadOnly(true);

        verticalLayout_3->addWidget(describe_TE);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);

        edit_PB = new QPushButton(ProjectInfoWidget);
        edit_PB->setObjectName(QStringLiteral("edit_PB"));

        verticalLayout_3->addWidget(edit_PB);

        save_PB = new QPushButton(ProjectInfoWidget);
        save_PB->setObjectName(QStringLiteral("save_PB"));
        save_PB->setEnabled(false);

        verticalLayout_3->addWidget(save_PB);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(ProjectInfoWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        timeline_SA = new QScrollArea(ProjectInfoWidget);
        timeline_SA->setObjectName(QStringLiteral("timeline_SA"));
        timeline_SA->setWidgetResizable(true);
        timeline_SA->setAlignment(Qt::AlignCenter);
        timeline_SA_Widget = new QWidget();
        timeline_SA_Widget->setObjectName(QStringLiteral("timeline_SA_Widget"));
        timeline_SA_Widget->setGeometry(QRect(0, 0, 1139, 845));
        timeline_SA_Layout = new QVBoxLayout(timeline_SA_Widget);
        timeline_SA_Layout->setSpacing(6);
        timeline_SA_Layout->setContentsMargins(11, 11, 11, 11);
        timeline_SA_Layout->setObjectName(QStringLiteral("timeline_SA_Layout"));
        timeline_SA->setWidget(timeline_SA_Widget);

        verticalLayout_2->addWidget(timeline_SA);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_PB = new QPushButton(ProjectInfoWidget);
        add_PB->setObjectName(QStringLiteral("add_PB"));

        horizontalLayout_2->addWidget(add_PB);

        remove_PB = new QPushButton(ProjectInfoWidget);
        remove_PB->setObjectName(QStringLiteral("remove_PB"));

        horizontalLayout_2->addWidget(remove_PB);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 7);

        retranslateUi(ProjectInfoWidget);

        QMetaObject::connectSlotsByName(ProjectInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectInfoWidget)
    {
        ProjectInfoWidget->setWindowTitle(QApplication::translate("ProjectInfoWidget", "ProjectInfoWidget", nullptr));
        label_2->setText(QApplication::translate("ProjectInfoWidget", "\351\241\271\347\233\256\345\220\215", nullptr));
        label_3->setText(QApplication::translate("ProjectInfoWidget", "\351\241\271\347\233\256\347\256\200\344\273\213", nullptr));
        edit_PB->setText(QApplication::translate("ProjectInfoWidget", "\347\274\226\350\276\221", nullptr));
        save_PB->setText(QApplication::translate("ProjectInfoWidget", "\344\277\235\345\255\230", nullptr));
        label->setText(QApplication::translate("ProjectInfoWidget", "\346\227\266\351\227\264\347\272\277", nullptr));
        add_PB->setText(QApplication::translate("ProjectInfoWidget", "\346\267\273\345\212\240\344\272\213\344\273\266", nullptr));
        remove_PB->setText(QApplication::translate("ProjectInfoWidget", "\345\210\240\351\231\244\344\272\213\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectInfoWidget: public Ui_ProjectInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTINFOWIDGET_H
