#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Shape
{
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() const override
    {
        return PI * pow(radius, 2);
    }

    double calculatePerimeter() const override
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b)
        : length(l), breadth(b) {}

    double calculateArea() const override
    {
        return length * breadth;
    }

    double calculatePerimeter() const override
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    double radius, length, breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    Circle c(radius);

    cout << "\nCircle Area = "
         << c.calculateArea();
    cout << "\nCircle Perimeter = "
         << c.calculatePerimeter();

    cout << "\n\nEnter length and breadth of rectangle: ";
    cin >> length >> breadth;

    Rectangle r(length, breadth);

    cout << "\nRectangle Area = "
         << r.calculateArea();
    cout << "\nRectangle Perimeter = "
         << r.calculatePerimeter();

    return 0;
}
