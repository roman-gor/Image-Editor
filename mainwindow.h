#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QFileDialog>
#include "editwindow.h"
#include "helpform.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonPlus_clicked();

    void on_action_triggered();

    void on_action_4_triggered();

    void on_action_3_triggered();

public slots:
    void mainSlot();

private:
    Ui::MainWindow *ui;
    EditWindow* editwindow;
    HelpForm* helpform;

signals:
    void edit_win(QString s, int p);
};
#endif // MAINWINDOW_H
