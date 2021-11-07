#include <iostream>
#include <cmath>
using namespace std;

class Punkt
{
    double odleglosc(double punkt1[], double punkt2[2]);
public:
    double punkt1[2], punkt2[2];
    Punkt();

};

double Punkt:: odleglosc(double punkt1[], double punkt2[])
{
    return sqrt(pow((punkt2[0] - punkt1[0]),2) + pow((punkt2[1] - punkt1[1]),2));
}

Punkt::Punkt()
{
    cout << "Podaj wsporzedne punktu 1: ";
    cin >> punkt1[0] >> punkt1[1];
    cout << "Podaj wsporzedne punktu 2: ";
    cin >> punkt2[0] >> punkt2[1];

    cout << "Odleglosc punktu 2 od punktu 1 rowna sie: " << odleglosc(punkt1, punkt2);
}

class Figura
{
public:
    int liczba_wierzcholkow;
    double **wierzcholki;
    Figura();
};

Figura::Figura()
{
    cout << "\nPodaj ilosc wierzcholkow figury: ";
    cin >> liczba_wierzcholkow;

    wierzcholki = new double *[liczba_wierzcholkow];
    for(int i = 0; i < liczba_wierzcholkow; ++i)
    {
        wierzcholki[i] = new double [2];
    }

    for(int i = 0; i < liczba_wierzcholkow; ++i)
    {
        cout << "Podaj wspolrzedne wierzcholka " << i+1 << ": ";
        cin >> wierzcholki[i][0] >> wierzcholki[i][1];
    }

    for(int i = 0; i < liczba_wierzcholkow; ++i)
    {
        cout << "Wierzcholek " << i+1 << ":\n";
        cout << wierzcholki[i][0] << " " << wierzcholki[i][1] << endl;
    }
}

int main()
{
    Punkt zadanie;
    Figura zadanie1;

    return 0;
}
