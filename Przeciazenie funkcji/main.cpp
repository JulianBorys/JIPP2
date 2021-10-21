#include <iostream>
using namespace std;

double pole(double a, double b);
int pole(int a, int h);
double pole(double a, double b, double h);
double pole(double r);

double pole(double a, double b) //Pole kwadratu lub prostokata
{
    return a*b;
}

int pole(int a, int h)
{
    return 0.5*a*h;
}

double pole(double a, double b, double h)
{
    return ((a+b)*h)*0.5;
}

double pole(double r)
{
    return 3.14*r*r;
}

int main()
{
    cout << "Pole kwadratu rowna sie: " << pole(3.15, 3.15) << endl;
    cout << "Pole trojkata rowna sie: " << pole(6,5) << endl;
    cout << "Pole trapezu rowna sie: " << pole(2, 2, 3.5) << endl;
    cout << "Pole kola rowna sie:" << pole(2) << endl;

    return 0;
}
