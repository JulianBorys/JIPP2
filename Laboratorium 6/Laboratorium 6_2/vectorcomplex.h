#include <iostream>
#include <complex>
using namespace std;

class Vector_complex
{
private:
    complex<double> x, y;
public:
    Vector_complex(): x((0),(0)), y((0),(0)) {};

    Vector_complex(complex<double> x, complex<double> y): x(x), y(y) {} ;

    void display();

    double length()
    {
        return sqrt(real(x) * real(x) + imag(x) * imag(x) + real(y) * real(y) + imag(y) * imag(y));
    }
};

void Vector_complex::display()
{
    cout << "Liczba: " << real(x)  << " + " << imag(x) << "i, " << real(y) << " + " << imag(y) << "i\n";
};
