#include <iostream>
using namespace std;

class Figure
{
public:
    virtual double getArea() = 0;
};

class Circle : public Figure
{
private:
    double promien;
public:
    Circle(double promien): promien(promien) {}
    double getArea()
    {
        return 3.14 * promien * promien;
    }
};

class Rectangle : public Figure
{
private:
    double bok_a;
    double bok_b;
public:
    Rectangle(double bok_a, double bok_b): bok_a(bok_a), bok_b(bok_b) {}
    double getArea()
    {
        return bok_a * bok_b;
    }
};