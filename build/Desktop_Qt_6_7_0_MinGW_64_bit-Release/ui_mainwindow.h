/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QWidget *centralwidget;
    QPushButton *pushButtonPlus;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *color_button;
    QPushButton *framing_button;
    QPushButton *filter_button;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(838, 611);
        MainWindow->setMinimumSize(QSize(838, 611));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_3 = new QAction(MainWindow);
        action_3->setObjectName("action_3");
        action_4 = new QAction(MainWindow);
        action_4->setObjectName("action_4");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonPlus = new QPushButton(centralwidget);
        pushButtonPlus->setObjectName("pushButtonPlus");
        pushButtonPlus->setGeometry(QRect(180, 160, 181, 221));
        QFont font;
        font.setPointSize(72);
        pushButtonPlus->setFont(font);
        pushButtonPlus->setFlat(true);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(440, 230, 281, 121));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 0, 801, 61));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        color_button = new QPushButton(layoutWidget);
        color_button->setObjectName("color_button");
        color_button->setEnabled(false);
        color_button->setMinimumSize(QSize(221, 40));

        gridLayout->addWidget(color_button, 0, 2, 1, 1);

        framing_button = new QPushButton(layoutWidget);
        framing_button->setObjectName("framing_button");
        framing_button->setEnabled(false);
        framing_button->setMinimumSize(QSize(221, 40));

        gridLayout->addWidget(framing_button, 0, 0, 1, 1);

        filter_button = new QPushButton(layoutWidget);
        filter_button->setObjectName("filter_button");
        filter_button->setEnabled(false);
        filter_button->setMinimumSize(QSize(221, 40));

        gridLayout->addWidget(filter_button, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 838, 17));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_4);
        menu_2->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\271", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265,\n"
"\320\275\320\260\320\266\320\260\320\262 \320\275\320\260 +\n"
"\320\270\320\273\320\270 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265\n"
"\320\244\320\260\320\271\320\273>\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        color_button->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202\320\276\320\272\320\276\321\200\321\200\320\265\320\272\321\206\320\270\321\217", nullptr));
        framing_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\264\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        filter_button->setText(QCoreApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
