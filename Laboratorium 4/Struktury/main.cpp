#include <iostream>
using namespace std;

struct samochod
{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    double cena;
};

int ta_sama_marka(samochod *jednostka, int wielkosc)
{
    int ile = 1;
    for(int i = 0; i < wielkosc; ++i)
        if(jednostka[i].marka == jednostka[i+1].marka)
            ile++;
    return ile;
}

int najstarszy_samochod(samochod *jednostka, int wielkosc)
{
    int minimum = 3000;
    for(int i = 0; i < wielkosc; ++i)
    {
        if(jednostka[i].rok_produkcji < minimum)
            minimum = jednostka[i].rok_produkcji;
    }
    return minimum;
}

int main()
{
    int wielkosc;
    cout << "Podaj ilosci samochodow do wpisania: ";
    cin >> wielkosc;

    samochod jednostka [4];

    for(int i = 0; i < wielkosc; ++i)
    {
        cout << "Podaj marke: "; cin >> jednostka[i].marka;
        cout << "Podaj model: "; cin >> jednostka[i].model;
        cout << "Podaj rok produkcji: "; cin >> jednostka[i].rok_produkcji;
        cout << "Podaj kolor: "; cin >> jednostka[i].kolor;
        cout << "Podaj cene: "; cin >> jednostka[i].cena;
    }


    cout << "--------------------------------------------\n";
    cout << "Marka\tModel \tRok \tKolor \t\tCena" << endl;
    cout << "--------------------------------------------\n";
    for(int i = 0; i < wielkosc; ++i)
    {
        cout << jednostka[i].marka << "\t" << jednostka[i].model << "\t" << jednostka[i].rok_produkcji << "\t" << jednostka[i].kolor << "\t\t" << jednostka[i].cena << endl;
    }

    cout << endl << "Samochod tej samej marki jest: " << ta_sama_marka(jednostka, wielkosc);
    cout << endl << "Najstarszy samochod jest z roku: " << najstarszy_samochod(jednostka, wielkosc);

    return 0;
}
