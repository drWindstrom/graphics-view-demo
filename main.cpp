
#include <QApplication>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene scene;

    QGraphicsRectItem *rectItem = new QGraphicsRectItem(QRectF(0, 0, 100, 50));
    scene.addItem(rectItem);

    QGraphicsEllipseItem *circleItem = new QGraphicsEllipseItem(QRectF(0, 50, 25, 25));
    scene.addItem(circleItem);

    QGraphicsSimpleTextItem *textItem = new QGraphicsSimpleTextItem(QObject::tr("Demo"));
    textItem->setPos(10, 10);

    scene.addItem(textItem);

    QGraphicsView view(&scene);
    view.show();

    return a.exec();
}
