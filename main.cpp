#include <QApplication>
#include <QtWidgets>
#include "coloritem.h"
#include "dropitem.h"

class GraphicsView : public QGraphicsView
{
public:
    GraphicsView(QGraphicsScene *scene) : QGraphicsView(scene)
    {
    }

protected:
    void resizeEvent(QResizeEvent *) override
    {
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene(-200, -200, 400, 400);

    for (int i = 0; i < 10; ++i) {
        ColorItem *colorItem = new ColorItem;
        colorItem->setPos(::sin((i * 6.28) / 10.0) * 150,
                          ::cos((i * 6.28) / 10.0) * 150);

        scene.addItem(colorItem);
    }

    DropItem *dropItem = new DropItem;
    dropItem->setPos(0, 0);
    scene.addItem(dropItem);

    GraphicsView view(&scene);
    view.setRenderHint(QPainter::Antialiasing);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view.setBackgroundBrush(QColor(230, 200, 167));
    view.setWindowTitle("My Drop Test");
    view.show();

    return a.exec();
}




