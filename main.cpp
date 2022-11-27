#include <iostream>
using namespace std;

//rectangle class declaration
class Rectangle
{
private:
    double width;
    double length;

public:


    void setWidth(double width);
    void setLength(double length);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

int main()
{
    Rectangle box;
    double rectWidth;
    double rectLength;

//get the rectangle's width and length from the user.

    cout << "This program will calculate the area of a\n"
         << "rectangle.  What is the width? ";
    cin >> rectWidth;

    cout << "What is the length? ";
    cin >> rectLength;

//Store the width and length of the rectangle
//in the box object

    box.setWidth(rectWidth);
    box.setLength(rectLength);

//Display the rectangle's data
    cout << "Here is the rectangle's data: " << endl
         << "Width: " << box.getWidth() << endl
         << "Length: " << box.getLength() << endl
         << "Area: " << box.getArea() << endl;

    return 0;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

//set a value to length
void Rectangle::setLength(double len)
{
    length = len;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}