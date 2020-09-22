#include "box.h"

Box::Box(QString type, QWidget *parent) : QRadioButton(parent), type(type)
{
    this->setCursor(Qt::PointingHandCursor);
    connect(this, &QRadioButton::clicked, this, &Box::onClick);
}
void Box::onClick()
{
    if (type == "fourwheeler")
    {
        int randNumber = 1 + rand() % 4;
        this->setStyleSheet("Box::checked{ image: url(:/resourses/img/car" + QString::number(randNumber) + ".png);} ");
    }
    else if (type == "twowheeler")
    {
        this->setStyleSheet("Box::checked{ image: url(:/resourses/img/bike.png);} ");
    }
}

void Box::showVehicle(QString type)
{
    if (type == "fourwheeler")
    {
        int randNumber = 1 + rand() % 4;
        this->setStyleSheet("Box::disabled{ image: url(:/resourses/img/car" + QString::number(randNumber) + ".png);} ");
    }
    else if (type == "twowheeler")
    {
        this->setStyleSheet("Box::disabled{ image: url(:/resourses/img/bike.png);} ");
    }
}
