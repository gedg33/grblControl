#ifndef HEIGHTMAPGRIDDRAWER_H
#define HEIGHTMAPGRIDDRAWER_H

#include <QObject>
#include "gldrawable.h"

class HeightMapGridDrawer : public GLDrawable
{
    Q_OBJECT
public:
    HeightMapGridDrawer(QObject *parent = 0);
    void draw();

    QPointF gridSize() const;
    void setGridSize(const QPointF &gridSize);

    QRectF borderRect() const;
    void setBorderRect(const QRectF &borderRect);

    double zTop() const;
    void setZTop(double zTop);

    double zBottom() const;
    void setZBottom(double zBottom);

private:
    QPointF m_gridSize;
    QRectF m_borderRect;
    double m_zTop;
    double m_zBottom;
};

#endif // HEIGHTMAPGRIDDRAWER_H
