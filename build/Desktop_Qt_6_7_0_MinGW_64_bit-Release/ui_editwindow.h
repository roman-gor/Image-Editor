/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QPushButton *color_button;
    QPushButton *filter_button;
    QPushButton *framing_button;
    QGridLayout *gridLayout_2;
    QPushButton *saveProjButton;
    QFrame *line;
    QPushButton *saveImageButton;
    QGraphicsView *graphicsView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QPushButton *cropButton;
    QWidget *page_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_5;
    QPushButton *blackwhiteButton;
    QPushButton *grayscaleButton;
    QPushButton *inversButton;
    QPushButton *sepiaButton;
    QPushButton *originalButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *page_3;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_6;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *saturationButton;
    QPushButton *brightButton;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *contrastButton;
    QPushButton *temperatureButton;
    QStackedWidget *stackSliders;
    QWidget *page_4;
    QLabel *label;
    QLabel *label_11;
    QLabel *nowNumLabel;
    QSlider *brightSlider;
    QWidget *page_5;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *nowNumContrast;
    QSlider *contrastSlider;
    QWidget *page_6;
    QSlider *saturationSlider;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *nowNumSatur;
    QWidget *page_7;
    QSlider *temperatureSlider;
    QLabel *NowNumTemperature;
    QLabel *label_17;
    QLabel *label_18;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName("EditWindow");
        EditWindow->resize(839, 612);
        EditWindow->setMinimumSize(QSize(839, 612));
        action = new QAction(EditWindow);
        action->setObjectName("action");
        action_3 = new QAction(EditWindow);
        action_3->setObjectName("action_3");
        action_4 = new QAction(EditWindow);
        action_4->setObjectName("action_4");
        action_5 = new QAction(EditWindow);
        action_5->setObjectName("action_5");
        action_6 = new QAction(EditWindow);
        action_6->setObjectName("action_6");
        action_7 = new QAction(EditWindow);
        action_7->setObjectName("action_7");
        action_2 = new QAction(EditWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(EditWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        color_button = new QPushButton(centralwidget);
        color_button->setObjectName("color_button");
        color_button->setEnabled(true);
        color_button->setMinimumSize(QSize(262, 40));

        gridLayout->addWidget(color_button, 0, 2, 1, 1);

        filter_button = new QPushButton(centralwidget);
        filter_button->setObjectName("filter_button");
        filter_button->setEnabled(true);
        filter_button->setMinimumSize(QSize(263, 40));

        gridLayout->addWidget(filter_button, 0, 1, 1, 1);

        framing_button = new QPushButton(centralwidget);
        framing_button->setObjectName("framing_button");
        framing_button->setEnabled(true);
        framing_button->setMinimumSize(QSize(262, 40));

        gridLayout->addWidget(framing_button, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        saveProjButton = new QPushButton(centralwidget);
        saveProjButton->setObjectName("saveProjButton");
        saveProjButton->setMinimumSize(QSize(397, 24));

        gridLayout_2->addWidget(saveProjButton, 3, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout_2->addWidget(line, 0, 0, 1, 2);

        saveImageButton = new QPushButton(centralwidget);
        saveImageButton->setObjectName("saveImageButton");
        saveImageButton->setMinimumSize(QSize(396, 24));

        gridLayout_2->addWidget(saveImageButton, 3, 1, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setMinimumSize(QSize(791, 390));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        gridLayout_2->addWidget(graphicsView, 2, 0, 1, 2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_7 = new QGridLayout(page);
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        cropButton = new QPushButton(page);
        cropButton->setObjectName("cropButton");
        cropButton->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(cropButton, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayoutWidget_2 = new QWidget(page_2);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 0, 821, 71));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        blackwhiteButton = new QPushButton(gridLayoutWidget_2);
        blackwhiteButton->setObjectName("blackwhiteButton");
        blackwhiteButton->setMaximumSize(QSize(51, 51));

        gridLayout_5->addWidget(blackwhiteButton, 0, 4, 1, 1);

        grayscaleButton = new QPushButton(gridLayoutWidget_2);
        grayscaleButton->setObjectName("grayscaleButton");
        grayscaleButton->setMaximumSize(QSize(51, 51));

        gridLayout_5->addWidget(grayscaleButton, 0, 2, 1, 1);

        inversButton = new QPushButton(gridLayoutWidget_2);
        inversButton->setObjectName("inversButton");
        inversButton->setMaximumSize(QSize(51, 51));

        gridLayout_5->addWidget(inversButton, 0, 1, 1, 1);

        sepiaButton = new QPushButton(gridLayoutWidget_2);
        sepiaButton->setObjectName("sepiaButton");
        sepiaButton->setMaximumSize(QSize(51, 51));

        gridLayout_5->addWidget(sepiaButton, 0, 3, 1, 1);

        originalButton = new QPushButton(gridLayoutWidget_2);
        originalButton->setObjectName("originalButton");
        originalButton->setMinimumSize(QSize(51, 47));
        originalButton->setMaximumSize(QSize(51, 47));

        gridLayout_5->addWidget(originalButton, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(61, 16));
        label_2->setMaximumSize(QSize(61, 16));

        gridLayout_5->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(91, 16));
        label_3->setMaximumSize(QSize(91, 16));

        gridLayout_5->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(61, 16));
        label_4->setMaximumSize(QSize(61, 16));

        gridLayout_5->addWidget(label_4, 1, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(61, 16));
        label_5->setMaximumSize(QSize(61, 16));

        gridLayout_5->addWidget(label_5, 1, 4, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(61, 16));
        label_6->setMaximumSize(QSize(61, 16));

        gridLayout_5->addWidget(label_6, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayoutWidget_3 = new QWidget(page_3);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(0, 0, 821, 71));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(gridLayoutWidget_3);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(61, 16));
        label_9->setMaximumSize(QSize(61, 16));
        QFont font;
        font.setPointSize(7);
        label_9->setFont(font);

        gridLayout_6->addWidget(label_9, 1, 2, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_3);
        label_10->setObjectName("label_10");
        label_10->setMinimumSize(QSize(61, 16));
        label_10->setMaximumSize(QSize(61, 16));
        label_10->setFont(font);

        gridLayout_6->addWidget(label_10, 1, 3, 1, 1);

        saturationButton = new QPushButton(gridLayoutWidget_3);
        saturationButton->setObjectName("saturationButton");
        saturationButton->setMinimumSize(QSize(51, 47));
        saturationButton->setMaximumSize(QSize(51, 47));
        saturationButton->setFlat(true);

        gridLayout_6->addWidget(saturationButton, 0, 2, 1, 1);

        brightButton = new QPushButton(gridLayoutWidget_3);
        brightButton->setObjectName("brightButton");
        brightButton->setMinimumSize(QSize(51, 47));
        brightButton->setMaximumSize(QSize(51, 47));
        brightButton->setFlat(true);

        gridLayout_6->addWidget(brightButton, 0, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(61, 16));
        label_7->setMaximumSize(QSize(61, 16));
        QFont font1;
        font1.setPointSize(8);
        label_7->setFont(font1);

        gridLayout_6->addWidget(label_7, 1, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_3);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(61, 16));
        label_8->setMaximumSize(QSize(61, 16));
        label_8->setFont(font1);

        gridLayout_6->addWidget(label_8, 1, 1, 1, 1);

        contrastButton = new QPushButton(gridLayoutWidget_3);
        contrastButton->setObjectName("contrastButton");
        contrastButton->setMinimumSize(QSize(51, 47));
        contrastButton->setMaximumSize(QSize(51, 47));
        contrastButton->setFlat(true);

        gridLayout_6->addWidget(contrastButton, 0, 1, 1, 1);

        temperatureButton = new QPushButton(gridLayoutWidget_3);
        temperatureButton->setObjectName("temperatureButton");
        temperatureButton->setMinimumSize(QSize(51, 47));
        temperatureButton->setMaximumSize(QSize(51, 47));
        temperatureButton->setFlat(true);

        gridLayout_6->addWidget(temperatureButton, 0, 3, 1, 1);

        stackSliders = new QStackedWidget(gridLayoutWidget_3);
        stackSliders->setObjectName("stackSliders");
        stackSliders->setMaximumSize(QSize(371, 51));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label = new QLabel(page_4);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 49, 16));
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(340, 30, 49, 16));
        nowNumLabel = new QLabel(page_4);
        nowNumLabel->setObjectName("nowNumLabel");
        nowNumLabel->setGeometry(QRect(190, 30, 16, 16));
        brightSlider = new QSlider(page_4);
        brightSlider->setObjectName("brightSlider");
        brightSlider->setGeometry(QRect(30, 10, 321, 20));
        brightSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px;\n"
"    background: transparent;\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}\n"
""));
        brightSlider->setMinimum(-100);
        brightSlider->setMaximum(100);
        brightSlider->setOrientation(Qt::Horizontal);
        stackSliders->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 30, 21, 16));
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(340, 30, 21, 16));
        nowNumContrast = new QLabel(page_5);
        nowNumContrast->setObjectName("nowNumContrast");
        nowNumContrast->setGeometry(QRect(190, 30, 16, 16));
        contrastSlider = new QSlider(page_5);
        contrastSlider->setObjectName("contrastSlider");
        contrastSlider->setGeometry(QRect(30, 10, 321, 20));
        contrastSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px;\n"
"    background: transparent;\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}\n"
""));
        contrastSlider->setMinimum(1);
        contrastSlider->setMaximum(100);
        contrastSlider->setOrientation(Qt::Horizontal);
        stackSliders->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        saturationSlider = new QSlider(page_6);
        saturationSlider->setObjectName("saturationSlider");
        saturationSlider->setGeometry(QRect(30, 10, 321, 20));
        saturationSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px;\n"
"    background: transparent;\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}\n"
""));
        saturationSlider->setMinimum(-10);
        saturationSlider->setMaximum(10);
        saturationSlider->setValue(0);
        saturationSlider->setOrientation(Qt::Horizontal);
        label_14 = new QLabel(page_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 30, 37, 12));
        label_15 = new QLabel(page_6);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(340, 30, 16, 16));
        nowNumSatur = new QLabel(page_6);
        nowNumSatur->setObjectName("nowNumSatur");
        nowNumSatur->setGeometry(QRect(190, 30, 16, 16));
        stackSliders->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        temperatureSlider = new QSlider(page_7);
        temperatureSlider->setObjectName("temperatureSlider");
        temperatureSlider->setGeometry(QRect(30, 10, 321, 20));
        temperatureSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #999999;\n"
"    height: 8px;\n"
"    background: transparent;\n"
"    margin: 2px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 18px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"}\n"
""));
        temperatureSlider->setMinimum(-30);
        temperatureSlider->setMaximum(30);
        temperatureSlider->setOrientation(Qt::Horizontal);
        NowNumTemperature = new QLabel(page_7);
        NowNumTemperature->setObjectName("NowNumTemperature");
        NowNumTemperature->setGeometry(QRect(190, 30, 21, 16));
        label_17 = new QLabel(page_7);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 26, 20, 20));
        label_18 = new QLabel(page_7);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(340, 30, 16, 16));
        stackSliders->addWidget(page_7);

        gridLayout_6->addWidget(stackSliders, 0, 4, 2, 1);

        stackedWidget->addWidget(page_3);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        EditWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EditWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 839, 17));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        EditWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EditWindow);
        statusbar->setObjectName("statusbar");
        EditWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_7);
        menu->addAction(action_2);
        menu->addSeparator();
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addSeparator();
        menu->addAction(action_5);
        menu_2->addAction(action_6);

        retranslateUi(EditWindow);

        stackedWidget->setCurrentIndex(0);
        stackSliders->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditWindow)
    {
        EditWindow->setWindowTitle(QCoreApplication::translate("EditWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\271", nullptr));
        action->setText(QCoreApplication::translate("EditWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_3->setText(QCoreApplication::translate("EditWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
        action_4->setText(QCoreApplication::translate("EditWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_5->setText(QCoreApplication::translate("EditWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_6->setText(QCoreApplication::translate("EditWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_7->setText(QCoreApplication::translate("EditWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
        action_2->setText(QCoreApplication::translate("EditWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
        color_button->setText(QCoreApplication::translate("EditWindow", "\320\246\320\262\320\265\321\202\320\276\320\272\320\276\321\200\321\200\320\265\320\272\321\206\320\270\321\217", nullptr));
        filter_button->setText(QCoreApplication::translate("EditWindow", "\320\244\320\270\320\273\321\214\321\202\321\200\321\213", nullptr));
        framing_button->setText(QCoreApplication::translate("EditWindow", "\320\232\320\260\320\264\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        saveProjButton->setText(QCoreApplication::translate("EditWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\277\321\200\320\276\320\265\320\272\321\202", nullptr));
        saveImageButton->setText(QCoreApplication::translate("EditWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        cropButton->setText(QCoreApplication::translate("EditWindow", "\320\236\320\261\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
        blackwhiteButton->setText(QString());
        grayscaleButton->setText(QString());
        inversButton->setText(QString());
        sepiaButton->setText(QString());
        originalButton->setText(QString());
        label_2->setText(QCoreApplication::translate("EditWindow", "\320\230\320\275\320\262\320\265\321\200\321\201\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("EditWindow", "\320\236\321\202\321\202\320\265\320\275\320\272\320\270 \321\201\320\265\321\200\320\276\320\263\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("EditWindow", "\320\241\320\265\320\277\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("EditWindow", "\320\247/\320\221", nullptr));
        label_6->setText(QCoreApplication::translate("EditWindow", "\320\236\321\200\320\270\320\263\320\270\320\275\320\260\320\273", nullptr));
        label_9->setText(QCoreApplication::translate("EditWindow", "\320\235\320\260\321\201\321\213\321\211\320\265\320\275\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("EditWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", nullptr));
        saturationButton->setText(QString());
        brightButton->setText(QString());
        label_7->setText(QCoreApplication::translate("EditWindow", "\320\257\321\200\320\272\320\276\321\201\321\202\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("EditWindow", "\320\232\320\276\320\275\321\202\321\200\320\260\321\201\321\202", nullptr));
        contrastButton->setText(QString());
        temperatureButton->setText(QString());
        label->setText(QCoreApplication::translate("EditWindow", "-100", nullptr));
        label_11->setText(QCoreApplication::translate("EditWindow", "100", nullptr));
        nowNumLabel->setText(QCoreApplication::translate("EditWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("EditWindow", "1", nullptr));
        label_13->setText(QCoreApplication::translate("EditWindow", "100", nullptr));
        nowNumContrast->setText(QCoreApplication::translate("EditWindow", "1", nullptr));
        label_14->setText(QCoreApplication::translate("EditWindow", "-10", nullptr));
        label_15->setText(QCoreApplication::translate("EditWindow", "10", nullptr));
        nowNumSatur->setText(QCoreApplication::translate("EditWindow", "1", nullptr));
        NowNumTemperature->setText(QCoreApplication::translate("EditWindow", "0", nullptr));
        label_17->setText(QCoreApplication::translate("EditWindow", "-30", nullptr));
        label_18->setText(QCoreApplication::translate("EditWindow", "30", nullptr));
        menu->setTitle(QCoreApplication::translate("EditWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("EditWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
