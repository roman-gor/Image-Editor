/********************************************************************************
** Form generated from reading UI file 'helpform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPFORM_H
#define UI_HELPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *editImgButton;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *aboutProgButton;
    QPushButton *saveButton;

    void setupUi(QWidget *HelpForm)
    {
        if (HelpForm->objectName().isEmpty())
            HelpForm->setObjectName("HelpForm");
        HelpForm->resize(544, 392);
        gridLayout_2 = new QGridLayout(HelpForm);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        editImgButton = new QPushButton(HelpForm);
        editImgButton->setObjectName("editImgButton");
        editImgButton->setMinimumSize(QSize(141, 51));

        gridLayout->addWidget(editImgButton, 2, 0, 1, 1);

        textEdit = new QTextEdit(HelpForm);
        textEdit->setObjectName("textEdit");
        textEdit->setMinimumSize(QSize(361, 291));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(12);
        textEdit->setFont(font);

        gridLayout->addWidget(textEdit, 0, 1, 5, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        aboutProgButton = new QPushButton(HelpForm);
        aboutProgButton->setObjectName("aboutProgButton");
        aboutProgButton->setMinimumSize(QSize(141, 51));

        gridLayout->addWidget(aboutProgButton, 1, 0, 1, 1);

        saveButton = new QPushButton(HelpForm);
        saveButton->setObjectName("saveButton");
        saveButton->setMinimumSize(QSize(141, 51));

        gridLayout->addWidget(saveButton, 3, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(HelpForm);

        QMetaObject::connectSlotsByName(HelpForm);
    } // setupUi

    void retranslateUi(QWidget *HelpForm)
    {
        HelpForm->setWindowTitle(QCoreApplication::translate("HelpForm", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        editImgButton->setText(QCoreApplication::translate("HelpForm", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265\n"
"\321\204\320\276\321\202\320\276\320\263\321\200\320\260\321\204\320\270\320\271", nullptr));
        aboutProgButton->setText(QCoreApplication::translate("HelpForm", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        saveButton->setText(QCoreApplication::translate("HelpForm", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \320\277\321\200\320\276\320\265\320\272\321\202\320\260/\n"
"\320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpForm: public Ui_HelpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPFORM_H
