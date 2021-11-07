#include <string>
#include <iostream>
using namespace std;

class Prostopadloscian
{
private:
    double a,b,c;
public:
    void wczytanie_danych(double a, double b, double c);
    double Pole_powierzchni(double a, double b, double c);
    void wyswietlanie_pole(double a, double b, double c);
};

void Prostopadloscian:: wczytanie_danych(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

double  Prostopadloscian:: Pole_powierzchni(double a, double b, double c)
{
    return 2*(a * b) + 2*(a * c) + 2*(b * c);
}

void Prostopadloscian::wyswietlanie_pole(double a, double b, double c)
{
    cout << "Pole prostopadloscianu rowna sie: " << Pole_powierzchni(a,b,c);
}

class Kula
{
public:
    double r;
    double pole_kuli(double r);
};

double Kula:: pole_kuli(double r)
{
    return 3.14*r*r;
}

class Funkcjakwadratowa
{
private:
    double a,b,c;
public:
    void wyswietlanie(double a, double b, double c);
};

void Funkcjakwadratowa:: wyswietlanie(double a, double b, double c)
{
    cout << a << "x^2 + " << b << "x + " << c;
}

class Student
{
public:
    string imie, nazwisko;
    int numer_albumu, liczba_pytan, poprawne_odpowiedzi;
    void wczytywanie(string *imie, string *nazwisko, int *numer_albumu, int *liczba_pytan, int *poprawne_odpowiedzi);
    double procent(int liczba_pytan, int poprawne_odpowiedzi);
};

void Student::wczytywanie(string *imie, string *nazwisko, int *numer_albumu, int *liczba_pytan,int *poprawne_odpowiedzi)
{
    cout << "\nPodaj imie: "; cin >> *imie;
    cout << "Podaj nazwisko: "; cin >> *nazwisko;
    cout << "Podaj numer albumu: "; cin >> *numer_albumu;
    cout << "Podaj ilosc pytan :"; cin >> *liczba_pytan;
    cout << "Podaj ilosc poprawnych odpowiedzi: "; cin >> *poprawne_odpowiedzi;
}

double Student:: procent(int liczba_pytan, int poprawne_odpowiedzi)
{
    return (poprawne_odpowiedzi*100)/liczba_pytan;
}

int main()
{
    Prostopadloscian zadanie;
    double a,b,c;

    cout << "Podaj dlugosci 3 krawedzi prostopadloscianu: ";
    cin >> a >> b >> c;
    zadanie.wczytanie_danych(a, b, c);

    cout << "Pole powierzchni wynosi: " << zadanie.Pole_powierzchni(a,b,c);



    Kula zadanie1;
    cout << "\nPodaj promien kuli: ";
    cin >> zadanie1.r;

    cout << "Pole kuli wynosi: " << zadanie1.pole_kuli(zadanie1.r);

    Funkcjakwadratowa zadanie2;
    cout << "\nPodaj wspolczynniki funkcji kwadratowej: ";
    cin >> zadanie2.a >> zadanie2.b >> zadanie2.c;
    zadanie2.wyswietlanie(zadanie2.a, zadanie2.b, zadanie2.c);

    Student zadanie3;
    zadanie3.wczytywanie(&zadanie3.imie, &zadanie3.nazwisko, &zadanie3.numer_albumu, &zadanie3.liczba_pytan, &zadanie3.poprawne_odpowiedzi);
    cout << "Procent poprawnych odpowiedzi rowna sie: " << zadanie3.procent(zadanie3.liczba_pytan, zadanie3.poprawne_odpowiedzi) << "%";

    return 0;
}