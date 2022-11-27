#include <iostream>
using namespace std;


class Point
{
public:
    double getX();
    double getY();
    void setX(double newX);
    void setY(double newY);

private:
    double xValue;
    double yValue;

};

int main()
{
    Point pt;
    cout << pt.getX();

//what would this print?
}

//assume all functions are declared
//later in the program


double Point::getX()
{
    return xValue;
}

double Point::getY()
{
    return yValue;
}


void Point::setX(double newX)
{
    xValue = newX;
}

void Point::setY(double newX)
{
    yValue = newX;
}