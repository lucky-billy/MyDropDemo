#ifndef MYITEM_H
#define MYITEM_H

#include <QGraphicsItem>

class DropItem : public QGraphicsObject
{
public:
    DropItem(QGraphicsItem *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

protected:
    void dragEnterEvent(QGraphicsSceneDragDropEvent *event) override;
    void dragLeaveEvent(QGraphicsSceneDragDropEvent *event) override;
    void dropEvent(QGraphicsSceneDragDropEvent *event) override;

private:
    QColor color;
    bool dragOver;
};

#endif // MYITEM_H
