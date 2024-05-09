#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    editwindow = new EditWindow;
    helpform = new HelpForm;
    connect(this, &MainWindow::edit_win, editwindow, &EditWindow::get_path);
    connect(editwindow, &EditWindow::mainWindow, this, &MainWindow::mainSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonPlus_clicked()
{
    QString str;
    str = QFileDialog::getOpenFileName(this, "Выбрать файл...");
    if (str == "")
        this->update();
    else
    {
        emit edit_win(str, 0);
        this->close();
        editwindow->show();
    }
}


void MainWindow::on_action_triggered()
{
    QString str;
    str = QFileDialog::getOpenFileName(this, "Выбрать файл...");
    if (str == "")
        this->update();
    else
    {
        emit edit_win(str, 0);
        this->close();
        editwindow->show();
    }
}


void MainWindow::on_action_4_triggered()
{
    QString proj_str = QFileDialog::getExistingDirectory(this, tr("Выбрать папку..."), "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if (proj_str == "")
        this->update();
    else
    {
        emit edit_win(proj_str, 1);
        this->close();
        editwindow->show();
    }
}

void MainWindow::mainSlot()
{
    editwindow->close();
    this->show();
}


void MainWindow::on_action_3_triggered()
{
    helpform->show();
}

