#include "editwindow.h"
#include "ui_editwindow.h"

EditWindow::EditWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EditWindow)
{
    ui->setupUi(this);
    helpform = new HelpForm;
    cropAreaAdded = false;
    isFilter = false;
    isCropped = false;
    isBright = false;
    isContrast = false;
    isColored = false;
    isInvers = false;
    isGrayScale = false;
    isSepia = false;
    isBlackWhite = false;
    isOriginal = true;
}

EditWindow::~EditWindow()
{
    delete ui;
}

void EditWindow::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    if (position == 0)
    {
        ui->originalButton->setIcon(QIcon("images/flower.jpg"));
        ui->originalButton->setIconSize(ui->originalButton->size());
        ui->inversButton->setIcon(QIcon("images/flower_invers.png"));
        ui->inversButton->setIconSize(ui->originalButton->size());
        ui->grayscaleButton->setIcon(QIcon("images/flower_grayscale.png"));
        ui->grayscaleButton->setIconSize(ui->originalButton->size());
        ui->sepiaButton->setIcon(QIcon("images/flower_sepia.png"));
        ui->sepiaButton->setIconSize(ui->originalButton->size());
        ui->blackwhiteButton->setIcon(QIcon("images/flower_blackwhite.png"));
        ui->blackwhiteButton->setIconSize(ui->originalButton->size());
        ui->brightButton->setIcon(QIcon("images/bright.png"));
        ui->brightButton->setIconSize(ui->brightButton->size());
        ui->contrastButton->setIcon(QIcon("images/contrast.png"));
        ui->contrastButton->setIconSize(ui->contrastButton->size());
        ui->saturationButton->setIcon(QIcon("images/saturat.png"));
        ui->saturationButton->setIconSize(ui->saturationButton->size());
        ui->temperatureButton->setIcon(QIcon("images/temperature.png"));
        ui->temperatureButton->setIconSize(ui->temperatureButton->size());
        ui->stackedWidget->setCurrentIndex(0);
        image.load(path);
        editImage = image;
        originImage = image;
        filterImage = image;
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(editImage));
        scene->addItem(item);
        ui->cropButton->setEnabled(false);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
    }
    else if (position == 1)
    {
        ui->originalButton->setIcon(QIcon("images/flower.jpg"));
        ui->originalButton->setIconSize(ui->originalButton->size());
        ui->inversButton->setIcon(QIcon("images/flower_invers.png"));
        ui->inversButton->setIconSize(ui->inversButton->size());
        ui->grayscaleButton->setIcon(QIcon("images/flower_grayscale.png"));
        ui->grayscaleButton->setIconSize(ui->grayscaleButton->size());
        ui->sepiaButton->setIcon(QIcon("images/flower_sepia.png"));
        ui->sepiaButton->setIconSize(ui->sepiaButton->size());
        ui->blackwhiteButton->setIcon(QIcon("images/flower_blackwhite.png"));
        ui->blackwhiteButton->setIconSize(ui->blackwhiteButton->size());
        ui->brightButton->setIcon(QIcon("images/bright.png"));
        ui->brightButton->setIconSize(ui->brightButton->size());
        ui->contrastButton->setIcon(QIcon("images/contrast.png"));
        ui->contrastButton->setIconSize(ui->contrastButton->size());
        ui->saturationButton->setIcon(QIcon("images/saturat.png"));
        ui->saturationButton->setIconSize(ui->saturationButton->size());
        ui->temperatureButton->setIcon(QIcon("images/temperature.png"));
        ui->temperatureButton->setIconSize(ui->temperatureButton->size());
        ui->stackedWidget->setCurrentIndex(0);

        projPath = path;
        QFile projFile(projPath + "/proj_file.proj");
        if (projFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&projFile);
            line = streamOut.readLine();
            path = line;
            line = streamOut.readLine();
            if (line == "true")
                cropAreaAdded = true;
            else
                cropAreaAdded = false;
            line = streamOut.readLine();
            if (line == "true")
                isFilter = true;
            else
                isFilter = false;
            line = streamOut.readLine();
            if (line == "true")
                isCropped = true;
            else
                isCropped = false;
            line = streamOut.readLine();
            if (line == "true")
                isBright = true;
            else
                isBright = false;
            line = streamOut.readLine();
            if (line == "true")
                isContrast = true;
            else
                isContrast = false;
            line = streamOut.readLine();
            if (line == "true")
                isColored = true;
            else
                isColored = false;
            line = streamOut.readLine();
            if (line == "true")
                isInvers = true;
            else
                isInvers = false;
            line = streamOut.readLine();
            if (line == "true")
                isGrayScale = true;
            else
                isGrayScale = false;
            line = streamOut.readLine();
            if (line == "true")
                isSepia = true;
            else
                isSepia = false;
            line = streamOut.readLine();
            if (line == "true")
                isBlackWhite = true;
            else
                isBlackWhite = false;
            line = streamOut.readLine();
            if (line == "true")
                isOriginal = true;
            else
                isOriginal = false;
        }
        projFile.close();

        QFile originFile(projPath + "/originImg_proj.txt");
        if (originFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&originFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            originFile.close();
        }
        QByteArray originByteArray = QByteArray::fromBase64(line.toLatin1());
        originImage = QImage::fromData(originByteArray);

        QFile editFile(projPath + "/editImg_proj.txt");
        if (editFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&editFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            editFile.close();
        }
        QByteArray editByteArray = QByteArray::fromBase64(line.toLatin1());
        editImage = QImage::fromData(editByteArray);

        QFile filterFile(projPath + "/filterImg_proj.txt");
        if (filterFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&filterFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            filterFile.close();
        }
        QByteArray filterByteArray = QByteArray::fromBase64(line.toLatin1());
        filterImage = QImage::fromData(filterByteArray);

        QFile colorFile(projPath + "/colorImg_proj.txt");
        if (colorFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&colorFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            colorFile.close();
        }
        QByteArray colorByteArray = QByteArray::fromBase64(line.toLatin1());
        colorBufImg = QImage::fromData(colorByteArray);

        if (isFilter)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isCropped)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(editImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isColored)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isOriginal)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(originImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
    }
}

void EditWindow::get_path(QString s, int p)
{
    path = s;
    position = p;
}

void EditWindow::on_framing_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    croparea = new CropArea;
    if (isColored)
        editImage = colorBufImg;
    else if (isFilter)
        editImage = filterImage;
    if (!cropAreaAdded) {
        ui->cropButton->setEnabled(true);
        croparea->setRect(0, 0, editImage.width()/1.5, editImage.height()/1.5);
        croparea->setBrush(QBrush(Qt::blue));
        croparea->setOpacity(0.2);
        croparea->set_image(image);
        scene->addItem(croparea);
        croparea->setFlag(QGraphicsItem::ItemIsMovable);
        croparea->setFlag(QGraphicsItem::ItemIsSelectable);
        croparea->setFlag(QGraphicsItem::ItemIsFocusable);
        croparea->setFlag(QGraphicsItem::ItemSendsGeometryChanges);
        cropAreaAdded = true;
    }
}


void EditWindow::on_cropButton_clicked()
{
    QPointF pos = croparea->scenePos();
    QRectF rectF(pos.x(), pos.y(), croparea->rect().width(), croparea->rect().height());
    QRect rect = rectF.toRect();
    if (isFilter)
        editImage = filterImage.copy(rect);
    else if (isColored)
        editImage = colorBufImg.copy(rect);
    else
        editImage = editImage.copy(rect);
    originImage = originImage.copy(rect);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(editImage));
    scene->clear();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
    ui->graphicsView->setScene(scene);
    ui->graphicsView->centerOn(item);
    if (croparea->scene() == scene) {
        scene->removeItem(croparea);
        delete croparea;
    }
    ui->cropButton->setEnabled(false);
    cropAreaAdded = false;
    isCropped = true;
    isFilter = false;
}


void EditWindow::on_saveImageButton_clicked()
{
    if (str == "")
    {
        str = QFileDialog::getSaveFileName(this, tr("Сохранить изображение"), "", tr("Images (*.png *.xpm *.jpg)"));
        if (str.isEmpty())
            this->update();
        else
        {
            if (isFilter)
                filterImage.save(str);
            else if (isCropped)
                editImage.save(str);
            else if (isColored)
                colorBufImg.save(str);
        }
    }
    else
    {
        if (isFilter)
            filterImage.save(str);
        else if (isCropped)
            editImage.save(str);
        else if (isColored)
            colorBufImg.save(str);
    }
}


void EditWindow::on_filter_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    if (cropAreaAdded)
        scene->removeItem(croparea);
}


void EditWindow::on_originalButton_clicked()
{
    if (!isOriginal)
    {
        filterImage = originImage;
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
        scene->clear();
        scene->addItem(item);
        scene->setSceneRect(item->boundingRect());
        isOriginal = true;
        isFilter = true;
        isColored = false;
        isBright = false;
        isInvers = false;
        isGrayScale = false;
        isSepia = false;
        isBlackWhite = false;
    }
}


void EditWindow::on_inversButton_clicked()
{
    if (!isInvers)
    {
        filterImage = originImage;
        for (int i = 1; i <= editImage.height(); i++)
        {
            for (int j = 1; j <= editImage.width(); j++)
            {
                QRgb pixel = originImage.pixel(j, i);
                int r = qRed(pixel);
                int g = qGreen(pixel);
                int b = qBlue(pixel);
                r = 255 - r;
                g = 255 - g;
                b = 255 - b;
                filterImage.setPixel(j, i, qRgb(r, g, b));
            }
        }
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
        scene->clear();
        scene->addItem(item);
        scene->setSceneRect(item->boundingRect());
        isOriginal = false;
        isCropped = false;
        isFilter = true;
        isSepia = false;
        isBlackWhite = false;
        isGrayScale = false;
        isInvers = true;
    }
}


void EditWindow::on_grayscaleButton_clicked()
{
    if (!isGrayScale)
    {
        filterImage = originImage;
        for(int y = 0; y < editImage.height(); ++y)
        {
            for(int x = 0; x < editImage.width(); ++x)
            {
                QRgb originalColor = originImage.pixel(x, y);
                int grayValue = qRed(originalColor);
                QRgb grayColor = qRgb(grayValue, grayValue, grayValue);
                filterImage.setPixel(x, y, grayColor);
            }
        }
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
        scene->clear();
        scene->addItem(item);
        scene->setSceneRect(item->boundingRect());
        isOriginal = false;
        isCropped = false;
        isFilter = true;
        isSepia = false;
        isBlackWhite = false;
        isGrayScale = true;
        isInvers = false;
    }
}


void EditWindow::on_sepiaButton_clicked()
{
    if (!isSepia)
    {
        filterImage = originImage;
        for (int y = 0; y < editImage.height(); y++)
        {
            for (int x = 0; x < editImage.width(); x++)
            {
                QRgb originalColor = originImage.pixel(x, y);
                int R = qRed(originalColor);
                int G = qGreen(originalColor);
                int B = qBlue(originalColor);
                R = qMin(255, int(0.393 * R + 0.769 * G + 0.189 * B));
                G = qMin(255, int(0.349 * R + 0.686 * G + 0.168 * B));
                B = qMin(255, int(0.272 * R + 0.534 * G + 0.131 * B));
                filterImage.setPixel(x, y, qRgb(R, G, B));
            }
        }
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
        scene->clear();
        scene->addItem(item);
        scene->setSceneRect(item->boundingRect());
        isOriginal = false;
        isCropped = false;
        isFilter = true;
        isSepia = true;
        isBlackWhite = false;
        isGrayScale = false;
        isInvers = false;
    }
}


void EditWindow::on_blackwhiteButton_clicked()
{
    if (!isBlackWhite)
    {
        filterImage = originImage;
        for (int y = 0; y < editImage.height(); y++)
        {
            for (int x = 0; x < editImage.width(); x++)
            {
                QRgb originalColor = originImage.pixel(x, y);
                int r = qRed(originalColor);
                int g = qGreen(originalColor);
                int b = qBlue(originalColor);
                if ((r + g + b) / 3 > 128)
                    filterImage.setPixel(x, y, qRgb(255, 255, 255));
                else
                    filterImage.setPixel(x, y, qRgb(0, 0, 0));
            }
        }
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
        scene->clear();
        scene->addItem(item);
        scene->setSceneRect(item->boundingRect());
        isOriginal = false;
        isCropped = false;
        isFilter = true;
        isSepia = false;
        isBlackWhite = true;
        isGrayScale = false;
        isInvers = false;
    }
}


void EditWindow::on_color_button_clicked()
{
    if (cropAreaAdded)
        scene->removeItem(croparea);
    if (isFilter)
    {
        colorImage = filterImage;
        colorBufImg = filterImage;
    }
    else
    {
        colorImage = editImage;
        colorBufImg = editImage;
    }
    ui->stackedWidget->setCurrentIndex(2);
    ui->stackSliders->setCurrentIndex(0);
}


void EditWindow::on_brightButton_clicked()
{
    ui->stackSliders->setCurrentIndex(0);
    colorImage = colorBufImg;
}


void EditWindow::on_contrastButton_clicked()
{
    ui->stackSliders->setCurrentIndex(1);
    colorImage = colorBufImg;
}


void EditWindow::on_saturationButton_clicked()
{
    ui->stackSliders->setCurrentIndex(2);
    colorImage = colorBufImg;
}


void EditWindow::on_temperatureButton_clicked()
{
    ui->stackSliders->setCurrentIndex(3);
    colorImage = colorBufImg;
}


void EditWindow::on_brightSlider_sliderMoved(int position)
{
    ui->nowNumLabel->setText(QString::number(position));
    QRgb pixel;
    colorBufImg = colorImage;
    for (int y = 0; y < originImage.height(); ++y)
    {
        for (int x = 0; x < originImage.width(); ++x)
        {
            pixel = colorImage.pixel(x, y);
            int r = qRed(pixel) + position;
            int g = qGreen(pixel) + position;
            int b = qBlue(pixel) + position;
            r = (r > 255) ? 255 : ((r < 0) ? 0 : r);
            g = (g > 255) ? 255 : ((g < 0) ? 0 : g);
            b = (b > 255) ? 255 : ((b < 0) ? 0 : b);
            colorBufImg.setPixel(x, y, qRgb(r, g, b));
        }
    }
    isColored = true;
    isOriginal = false;
    isBright = true;
    isFilter = false;
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
    scene->clear();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
}


void EditWindow::on_contrastSlider_sliderMoved(int position)
{
    QRgb pixel;
    colorBufImg = colorImage;
    ui->nowNumContrast->setText(QString::number(position));
    double pos = position * 0.1;
    if (pos < 1)
        pos = 1;
    for (int y = 0; y < originImage.height(); ++y) {
        for (int x = 0; x < originImage.width(); ++x) {
            pixel = colorImage.pixel(x, y);
            int r = qRed(pixel);
            int g = qGreen(pixel);
            int b = qBlue(pixel);

            r = ((r - 127) * pos) + 127;
            g = ((g - 127) * pos) + 127;
            b = ((b - 127) * pos) + 127;

            r = (r > 255) ? 255 : ((r < 0) ? 0 : r);
            g = (g > 255) ? 255 : ((g < 0) ? 0 : g);
            b = (b > 255) ? 255 : ((b < 0) ? 0 : b);
            colorBufImg.setPixel(x, y, qRgb(int(r), int(g), int(b)));
        }
    }
    isColored = true;
    isOriginal = false;
    isContrast = true;
    isFilter = false;
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
    scene->clear();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
}


void EditWindow::on_saturationSlider_sliderMoved(int position)
{
    double pos;
    colorBufImg = colorImage;
    ui->nowNumSatur->setText(QString::number(position));
    pos = position + 10;
    pos *= 0.1;
    for (int y = 0; y < originImage.height(); ++y)
    {
        for (int x = 0; x < originImage.width(); ++x)
        {
            QColor color = colorImage.pixelColor(x, y);
            float hue = color.hueF();
            float saturation = color.saturationF();
            float value = color.valueF();
            saturation *= pos;
            saturation = qMin(1.0f, qMax(0.0f, saturation));
            color.setHsvF(hue, saturation, value);
            colorBufImg.setPixelColor(x, y, color);
        }
    }
    isColored = true;
    isOriginal = false;
    isFilter = false;
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
    scene->clear();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
}



void EditWindow::on_temperatureSlider_sliderMoved(int position)
{
    colorBufImg = colorImage;
    ui->NowNumTemperature->setText(QString::number(position));
    for (int y = 0; y < originImage.height(); ++y)
    {
        for (int x = 0; x < originImage.width(); ++x)
        {
            QColor color = colorImage.pixelColor(x, y);
            int red = color.red();
            int blue = color.blue();
            red = qBound(0, red + position, 255);
            blue = qBound(0, blue - position, 255);
            color.setRed(red);
            color.setBlue(blue);
            colorBufImg.setPixelColor(x, y, color);
        }
    }
    isColored = true;
    isOriginal = false;
    isFilter = false;
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
    scene->clear();
    scene->addItem(item);
    scene->setSceneRect(item->boundingRect());
}


void EditWindow::on_saveProjButton_clicked()
{
    QString str = QFileDialog::getExistingDirectory(this, tr("Выберите папку"), "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    QFile origfile(str + "/originImg_proj.txt");
    if (origfile.exists()) {
        origfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile filterfile(str + "/filterImg_proj.txt");
    if (filterfile.exists()) {
        filterfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile colorfile(str + "/colorImg_proj.txt");
    if (colorfile.exists()) {
        colorfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile editfile(str + "/editImg_proj.txt");
    if (editfile.exists()) {
        editfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile projfile(str + "/proj_file.proj");
    if (projfile.exists()) {
        projfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QByteArray originbyteArray;
    QBuffer originBuffer(&originbyteArray);
    originImage.save(&originBuffer, "PNG");
    QString originImageString = QString::fromLatin1(originbyteArray.toBase64().data());

    QByteArray filterbyteArray;
    QBuffer filterBuffer(&filterbyteArray);
    filterImage.save(&filterBuffer, "PNG");
    QString filterImageString = QString::fromLatin1(filterbyteArray.toBase64().data());

    QByteArray editbyteArray;
    QBuffer editBuffer(&editbyteArray);
    editImage.save(&editBuffer, "PNG");
    QString editImageString = QString::fromLatin1(editbyteArray.toBase64().data());

    QByteArray colorbyteArray;
    QBuffer colorBuffer(&colorbyteArray);
    colorBufImg.save(&colorBuffer, "PNG");
    QString colorImageString = QString::fromLatin1(colorbyteArray.toBase64().data());

    if (originImageString.isEmpty() || filterImageString.isEmpty() || editImageString.isEmpty() || colorImageString.isEmpty())
    {
        qDebug() << "Ошибка при сохранении изображений";
    }

    QFile originImgProj_file(str + "/originImg_proj.txt");
    if (originImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&originImgProj_file);
        streamOut << originImageString;
    }
    originImgProj_file.close();

    QFile filterImgProj_file(str + "/filterImg_proj.txt");
    if (filterImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&filterImgProj_file);
        streamOut << filterImageString;
    }
    filterImgProj_file.close();

    QFile editImgProj_file(str + "/editImg_proj.txt");
    if (editImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&editImgProj_file);
        streamOut << editImageString;
    }
    editImgProj_file.close();

    QFile colorImgProj_file(str + "/colorImg_proj.txt");
    if (colorImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&colorImgProj_file);
        streamOut << colorImageString;
    }
    colorImgProj_file.close();


    QFile proj_file(str + "/proj_file.proj");
    if (proj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        /*
    cropAreaAdded = false;
    isFilter = false;
    isCropped = false;
    isBright = false;
    isContrast = false;
    isColored = false;
    isInvers = false;
    isGrayScale = false;
    isSepia = false;
    isBlackWhite = false;
    isOriginal = true;
         */

        QTextStream streamOut(&proj_file);
        streamOut << path + "\n";
        if (cropAreaAdded)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isFilter)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isCropped)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isBright)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isContrast)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isColored)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isInvers)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isGrayScale)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isSepia)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isBlackWhite)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isOriginal)
            streamOut << "true\n";
        else
            streamOut << "false";
    }
    proj_file.close();
}


void EditWindow::on_action_2_triggered()
{
    QString str = QFileDialog::getExistingDirectory(this, tr("Выберите папку"), "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);

    QFile origfile(str + "/originImg_proj.txt");
    if (origfile.exists()) {
        origfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile filterfile(str + "/filterImg_proj.txt");
    if (filterfile.exists()) {
        filterfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile colorfile(str + "/colorImg_proj.txt");
    if (colorfile.exists()) {
        colorfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile editfile(str + "/editImg_proj.txt");
    if (editfile.exists()) {
        editfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QFile projfile(str + "/proj_file.proj");
    if (projfile.exists()) {
        projfile.remove();
    } else {
        qDebug() << "Файл" << str << "не существует.";
    }

    QByteArray originbyteArray;
    QBuffer originBuffer(&originbyteArray);
    originImage.save(&originBuffer, "PNG");
    QString originImageString = QString::fromLatin1(originbyteArray.toBase64().data());

    QByteArray filterbyteArray;
    QBuffer filterBuffer(&filterbyteArray);
    filterImage.save(&filterBuffer, "PNG");
    QString filterImageString = QString::fromLatin1(filterbyteArray.toBase64().data());

    QByteArray editbyteArray;
    QBuffer editBuffer(&editbyteArray);
    editImage.save(&editBuffer, "PNG");
    QString editImageString = QString::fromLatin1(editbyteArray.toBase64().data());

    QByteArray colorbyteArray;
    QBuffer colorBuffer(&colorbyteArray);
    colorBufImg.save(&colorBuffer, "PNG");
    QString colorImageString = QString::fromLatin1(colorbyteArray.toBase64().data());

    if (originImageString.isEmpty() || filterImageString.isEmpty() || editImageString.isEmpty() || colorImageString.isEmpty())
    {
        qDebug() << "Ошибка при сохранении изображений";
    }

    QFile originImgProj_file(str + "/originImg_proj.txt");
    if (originImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&originImgProj_file);
        streamOut << originImageString;
    }
    originImgProj_file.close();

    QFile filterImgProj_file(str + "/filterImg_proj.txt");
    if (filterImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&filterImgProj_file);
        streamOut << filterImageString;
    }
    filterImgProj_file.close();

    QFile editImgProj_file(str + "/editImg_proj.txt");
    if (editImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&editImgProj_file);
        streamOut << editImageString;
    }
    editImgProj_file.close();

    QFile colorImgProj_file(str + "/colorImg_proj.txt");
    if (colorImgProj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        QTextStream streamOut(&colorImgProj_file);
        streamOut << colorImageString;
    }
    colorImgProj_file.close();


    QFile proj_file(str + "/proj_file.proj");
    if (proj_file.open(QIODevice::Append | QIODevice::WriteOnly))
    {
        /*
    cropAreaAdded = false;
    isFilter = false;
    isCropped = false;
    isBright = false;
    isContrast = false;
    isColored = false;
    isInvers = false;
    isGrayScale = false;
    isSepia = false;
    isBlackWhite = false;
    isOriginal = true;
         */

        QTextStream streamOut(&proj_file);
        streamOut << path + "\n";
        if (cropAreaAdded)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isFilter)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isCropped)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isBright)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isContrast)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isColored)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isInvers)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isGrayScale)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isSepia)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isBlackWhite)
            streamOut << "true\n";
        else
            streamOut << "false\n";
        if (isOriginal)
            streamOut << "true\n";
        else
            streamOut << "false";
    }
    proj_file.close();
}


void EditWindow::on_action_triggered()
{
    QString path = QFileDialog::getOpenFileName(this, "Выбрать файл...");
    if (path == "")
        this->update();
    else
    {
        image.load(path);
        editImage = image;
        originImage = image;
        filterImage = image;
        QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(editImage));
        scene->clear();
        scene->addItem(item);
        ui->cropButton->setEnabled(false);
        ui->graphicsView->setScene(scene);
        ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
    }
}


void EditWindow::on_action_7_triggered()
{
    QString projPath = QFileDialog::getExistingDirectory(this, tr("Выбрать папку..."), "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if (projPath == "")
        this->update();
    else
    {
        QFile projFile(projPath + "/proj_file.proj");
        if (projFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&projFile);
            line = streamOut.readLine();
            path = line;
            line = streamOut.readLine();
            if (line == "true")
                cropAreaAdded = true;
            else
                cropAreaAdded = false;
            line = streamOut.readLine();
            if (line == "true")
                isFilter = true;
            else
                isFilter = false;
            line = streamOut.readLine();
            if (line == "true")
                isCropped = true;
            else
                isCropped = false;
            line = streamOut.readLine();
            if (line == "true")
                isBright = true;
            else
                isBright = false;
            line = streamOut.readLine();
            if (line == "true")
                isContrast = true;
            else
                isContrast = false;
            line = streamOut.readLine();
            if (line == "true")
                isColored = true;
            else
                isColored = false;
            line = streamOut.readLine();
            if (line == "true")
                isInvers = true;
            else
                isInvers = false;
            line = streamOut.readLine();
            if (line == "true")
                isGrayScale = true;
            else
                isGrayScale = false;
            line = streamOut.readLine();
            if (line == "true")
                isSepia = true;
            else
                isSepia = false;
            line = streamOut.readLine();
            if (line == "true")
                isBlackWhite = true;
            else
                isBlackWhite = false;
            line = streamOut.readLine();
            if (line == "true")
                isOriginal = true;
            else
                isOriginal = false;
        }
        projFile.close();

        QFile originFile(projPath + "/originImg_proj.txt");
        if (originFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&originFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            originFile.close();
        }
        QByteArray originByteArray = QByteArray::fromBase64(line.toLatin1());
        originImage = QImage::fromData(originByteArray);

        QFile editFile(projPath + "/editImg_proj.txt");
        if (editFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&editFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            editFile.close();
        }
        QByteArray editByteArray = QByteArray::fromBase64(line.toLatin1());
        editImage = QImage::fromData(editByteArray);

        QFile filterFile(projPath + "/filterImg_proj.txt");
        if (filterFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&filterFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            filterFile.close();
        }
        QByteArray filterByteArray = QByteArray::fromBase64(line.toLatin1());
        filterImage = QImage::fromData(filterByteArray);

        QFile colorFile(projPath + "/colorImg_proj.txt");
        if (colorFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream streamOut(&colorFile);
            qDebug() << "Файл открыт";
            line = streamOut.readAll();
            colorFile.close();
        }
        QByteArray colorByteArray = QByteArray::fromBase64(line.toLatin1());
        colorBufImg = QImage::fromData(colorByteArray);

        if (isFilter)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(filterImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isCropped)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(editImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isColored)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(colorBufImg));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
        else if (isOriginal)
        {
            QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap::fromImage(originImage));
            scene->clear();
            scene->addItem(item);
            ui->cropButton->setEnabled(false);
            ui->graphicsView->setScene(scene);
            ui->graphicsView->fitInView(item, Qt::KeepAspectRatio);
        }
    }
}


/*
 * для EditWindow:
 * Сохранить как
 * Сохранить
 * Закрыть
 * -----------------
 * Справка
 */


void EditWindow::on_action_3_triggered()
{
    str = QFileDialog::getSaveFileName(this, tr("Сохранить изображение"), "", tr("Images (*.png *.xpm *.jpg)"));
    if (str.isEmpty())
        this->update();
    else
    {
        if (isFilter)
            filterImage.save(str);
        else if (isCropped)
            editImage.save(str);
        else if (isColored)
            colorBufImg.save(str);
    }
}




void EditWindow::on_action_4_triggered()
{
    if (str == "")
    {
        str = QFileDialog::getSaveFileName(this, tr("Сохранить изображение"), "", tr("Images (*.png *.xpm *.jpg)"));
        if (str.isEmpty())
            this->update();
        else
        {
            if (isFilter)
                filterImage.save(str);
            else if (isCropped)
                editImage.save(str);
            else if (isColored)
                colorBufImg.save(str);
        }
    }
    else
    {
        if (isFilter)
            filterImage.save(str);
        else if (isCropped)
            editImage.save(str);
        else if (isColored)
            colorBufImg.save(str);
    }
}


void EditWindow::on_action_5_triggered()
{
    scene->clear();
    emit mainWindow();
}


void EditWindow::on_action_6_triggered()
{
    helpform->show();
}

