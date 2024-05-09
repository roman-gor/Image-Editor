#ifndef EDITWINDOW_H
#define EDITWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QImage>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QColor>
#include <QRgb>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QBrush>
#include <QByteArray>
#include <QBuffer>
#include "croparea.h"
#include "helpform.h"

namespace Ui {
class EditWindow;
}

class EditWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditWindow(QWidget *parent = nullptr);
    ~EditWindow();
    void showEvent(QShowEvent* event);

private:
    Ui::EditWindow *ui;
    QGraphicsScene* scene = new QGraphicsScene();
    CropArea *croparea;
    HelpForm* helpform;
    bool cropAreaAdded;
    bool isFilter, isCropped, isColored, isOriginal, isInvers, isGrayScale, isSepia, isBlackWhite, isBright, isContrast;
    int position;
    QString path, projPath, line, str;
    QImage image, editImage, originImage, colorImage, colorBufImg, filterImage;

public slots:
    void get_path(QString s, int p);

private slots:
    void on_framing_button_clicked();
    void on_cropButton_clicked();
    void on_saveImageButton_clicked();
    void on_filter_button_clicked();
    void on_inversButton_clicked();
    void on_originalButton_clicked();
    void on_grayscaleButton_clicked();
    void on_sepiaButton_clicked();
    void on_blackwhiteButton_clicked();
    void on_brightSlider_sliderMoved(int position);
    void on_color_button_clicked();
    void on_brightButton_clicked();
    void on_contrastSlider_sliderMoved(int position);
    void on_contrastButton_clicked();
    void on_saturationButton_clicked();
    void on_saturationSlider_sliderMoved(int position);
    void on_temperatureButton_clicked();
    void on_temperatureSlider_sliderMoved(int position);
    void on_saveProjButton_clicked();
    void on_action_2_triggered();
    void on_action_triggered();
    void on_action_7_triggered();
    void on_action_3_triggered();
    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

signals:
    void mainWindow();
};

#endif // EDITWINDOW_H
