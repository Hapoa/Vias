﻿#ifndef VISUAL_ALGORITHMS_ITEM_RECT_ITEM_H
#define VISUAL_ALGORITHMS_ITEM_RECT_ITEM_H

#include "src/config.h"

#include <QBrush>
#include <QGraphicsRectItem>

class RectItem : public QGraphicsRectItem
{
    Q_PROPERTY(QPointF pos READ pos WRITE setPos)

public:

    RectItem(qreal x, qreal y, qreal width, qreal height);
    inline QColor brushColor() const { return brush().color(); }
    void setBorder(const QColor & color, int width = 1);

};

#endif // VISUAL_ALGORITHMS_ITEM_RECT_ITEM_H
