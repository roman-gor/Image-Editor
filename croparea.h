#ifndef CROPAREA_H
#define CROPAREA_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <QString>

class CropArea : public QGraphicsRectItem
{
public:
    CropArea(QGraphicsItem *parent = nullptr);
    void set_image(QImage img);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QPointF m_lastMousePos;
    bool m_resizing;
    QPixmap m_image;
};

#endif // CROPAREA_H
