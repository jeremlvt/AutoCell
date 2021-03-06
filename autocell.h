#ifndef AUTOCELL_H
#define AUTOCELL_H

#include <QVector>
#include <QPoint>

class AutoCell
{

public:
    QVector<QVector<int> > getMatrice() const;
    AutoCell(int width = 10,int height=10, int cellWidth=10, int cellHeight=10,int cellStates=2,int currentState=0);

    void setMatrice(const QVector<QVector<int> > &value);

    int getWidth() const;
    void setWidth(int value);

    int getHeight() const;
    void setHeight(int value);

    int getCellWidth() const;
    void setCellWidth(int value);

    int getCellHeight() const;
    void setCellHeight(int value);

    QVector<QVector<int> > getNeighborhood() const;
    void setNeighborhood(const QVector<QVector<int> > &value);

    virtual void changeCellState(QPoint point)=0;

    virtual void nextState()=0;

    int getCurrentState() const;
    void setCurrentState(int value);

protected:

    QVector< QVector <int> > matrice;
    int width;
    int height;
    int cellWidth;
    int cellHeight;
    int cellStates;
    int currentState;
    QVector< QVector <int> > neighborhood;

};

#endif // AUTOCELL_H
