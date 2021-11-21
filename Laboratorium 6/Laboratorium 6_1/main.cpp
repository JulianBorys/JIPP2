#include "vector.h"

int main()
{
    Vector a(3,3), b(4,4), c;
    double skalar = 2.5;

    a.print();
    b.print();

    //a = a.operator!(); //wektor przeciwny
    //a.print();

    //c = a.operator+(b); //dodawanie wektorow
    //c.print();

    //c = b.operator-(a); //odejmowanie wektorow
    //c.print();

    //c = a.operator*(b); //mnożenie wektorow
    //c.print();

    //cout << "\nSkalar: " << skalar << endl;
    //c = a.operator*=(skalar); //mnozenie przez skalar
    //c.print();

    //cout << endl;
    //a.operator>(b); //porownywanie dlugosci wektorow

    return 0;
}