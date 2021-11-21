#include <iostream>
using namespace std;

class Vector
{
private:
    double x,y;

public:
    Vector();

    Vector(double x, double y);

    void print();

    double length();

    Vector operator!() //wektor przeciwny
    {
        return {- this->x, - this->y};
    }

    Vector operator+(const Vector &rhs) //dodawanie wektorow
    {
        return {x + rhs.x, y + rhs.y};
    }

    Vector operator-(const Vector &rhs) //odejmowanie wektorow
    {
        return {x - rhs.x, y - rhs.y};
    }

    Vector operator*(const Vector &rhs) //iloczyn skalarny
    {
        return {x * rhs.x, y * rhs.y};
    }

    Vector operator*=(const double &rhs) //mnozenie przez skalar
    {
        return {x * rhs, y * rhs};
    }

    void operator>(Vector &rhs) //porownywanie dlugosci
    {
        if(length() > rhs.length())
            cout << "Pierwszy wektor jest wiekszy\n";
        else if(length() < rhs.length())
            cout << "Drugi wektor jest wiekszy\n";
        else if(length() == rhs.length())
            cout << "Wektory sa tej samej dlugosci\n";
    }
};

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y): x(x), y(y) {}

double Vector::length()
{
    return sqrt(x * x + y * y);
}

void Vector::print()
{
    cout << "\tWsporzedne wektora\n";
    cout << "x = " << x << "\ny = " << y << endl;
}