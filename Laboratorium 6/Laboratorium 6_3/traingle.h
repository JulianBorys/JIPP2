#include <iostream>
using namespace std;

class Triangle
{
private:
    static Triangle Node;
    string nazwa;

public:
    Triangle();

    Triangle(double a, double b, double c, string nazwa);

    void display();

};

Triangle Triangle::Node;

Triangle::Triangle(): nazwa("puste") {}

Triangle::Triangle(double a, double b, double c, string nazwa):
    a(a), b(b), c(c), nazwa(nazwa) {}

void Triangle::display()
{
    cout << "\tNazwa trojkata: " << nazwa << endl;
    cout << "Wierzcholki:" << endl;
    cout << "a"
}