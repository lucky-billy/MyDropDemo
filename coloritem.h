#ifndef COLORITEM_H
#define COLORITEM_H

#include <QGraphicsItem>

class ColorItem : public QGraphicsItem
{
public:
    ColorItem();

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;

private:
    QColor color;
};

#endif // COLORITEM_H
