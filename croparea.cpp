#include "croparea.h"

CropArea::CropArea(QGraphicsItem *parent) : QGraphicsRectItem(parent), m_resizing(false)
{

}

void CropArea::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    m_lastMousePos = event->pos();
    if (rect().contains(event->pos())) {
        m_resizing = true;
        m_lastMousePos = event->pos();
    }
    QGraphicsRectItem::mousePressEvent(event);
}

void CropArea::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    QSize imageSize = m_image.size();
    if (m_resizing) {
        QPointF mouseDelta = event->pos() - m_lastMousePos;
        QRectF newRect = rect();
        newRect.setWidth(qMin(newRect.width() + mouseDelta.x(), (qreal)imageSize.width()));
        newRect.setHeight(qMin(newRect.height() + mouseDelta.y(), (qreal)imageSize.height()));
        newRect.moveTop(qMax(newRect.top(), 0.0));
        newRect.moveLeft(qMax(newRect.left(), 0.0));
        newRect.moveBottom(qMin(newRect.bottom(), (qreal)imageSize.height()));
        newRect.moveRight(qMin(newRect.right(), (qreal)imageSize.width()));
        setRect(newRect);
        m_lastMousePos = event->pos();
    }
    QGraphicsRectItem::mouseMoveEvent(event);
}

void CropArea::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    m_resizing = false;
    QGraphicsRectItem::mouseReleaseEvent(event);
}

void CropArea::set_image(QImage img)
{
    m_image = QPixmap::fromImage(img);
}


