#include <iostream>
using namespace std;

//Klasa główna
class Figura
{
private:
    string nazwa;
    string kolor;
public:
    Figura(): nazwa("pusta"), kolor("pusty") {}
    Figura(string nazwa, string kolor): nazwa(nazwa), kolor(kolor) {}
    void print_figura();
};

void Figura::print_figura()
{
    cout << "Dane Figury" << endl;
    cout << "Nazwa: " << nazwa << endl;
    cout << "Kolor: " << kolor << endl;
}


//Kwadrat
class Kwadrat : public Figura
{
private:
    double bok;
public:
    Kwadrat(): Figura("puste","puste"), bok(1) {};
    Kwadrat(string nazwa, string kolor, double bok) : Figura(nazwa, kolor), bok(bok) {}
    double pole_kwadrat();
    double obwod_kwadrat();
    void print_kwadrat();
};

double Kwadrat::pole_kwadrat()
{
    return bok * bok;
}

double Kwadrat::obwod_kwadrat()
{
    return 4 * bok;
}

void Kwadrat::print_kwadrat()
{
    print_figura();
    cout << "Pole: " << pole_kwadrat() << endl;
    cout << "Obwod: " << obwod_kwadrat() << endl;
}


//Prostokat
class Prostokat : public Figura
{
private:
    double bok_a;
    double bok_b;
public:
    double pole_prostokat();
    double obwod_prostokat();
};

double Prostokat::pole_prostokat()
{
    return bok_a * bok_b;
}

double Prostokat::obwod_prostokat()
{
    return 2 * (bok_a + bok_b);
}


//Trojkat
class Trojkat : public Figura
{
private:
    double bok_a;
    double bok_b;
    double bok_c;
    double wysokosc;
public:
    double pole_trojkata();
    double obwod_trojkata();
};

double Trojkat::pole_trojkata()
{
    return 0.5 * bok_a * wysokosc;
}

double Trojkat::obwod_trojkata()
{
    return bok_a + bok_b + bok_c;
}


//Kolo
class Kolo : public Figura
{
private:
    double promien;
public:
    double pole_kola();
    double obwod_kola();
};

double Kolo::pole_kola()
{
    return 3.14 * promien * promien;
}

double Kolo::obwod_kola()
{
    return 2 * 3.14 * promien;
}


//Trapez
class Trapez : public Figura
{
private:
    double bok_a;
    double bok_b;
    double bok_c;
    double bok_d;
    double wysokosc;
public:
    double pole_trapeza();
    double obwod_trapeza();
};

double Trapez::pole_trapeza()
{
    return ((bok_a + bok_b) * wysokosc) * 0.5;
}

double Trapez::obwod_trapeza()
{
    return bok_a + bok_b + bok_c + bok_d;
}


//Romb
class Romb : public Figura
{
private:
    double bok;
    double wysokosc;
public:
    double pole_rombu();
    double obwod_rombu();
};

double Romb::pole_rombu()
{
    return wysokosc * bok;
}

double Romb::obwod_rombu()
{
    return 4 * bok;
}


//Rownoleglobok
class Rownoleglobok : public Figura
{
private:
    double bok_a;
    double bok_b;
    double wysokosc;
public:
    double pole_rownolegloboku();
    double obwod_rownolegloboku();
};

double Rownoleglobok::pole_rownolegloboku()
{
    return bok_a * wysokosc;
}

double Rownoleglobok::obwod_rownolegloboku()
{
    return 2 * (bok_a + bok_b);
}