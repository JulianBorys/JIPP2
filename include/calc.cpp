#include <iostream>
#include "calc.h"


double dodawanie(double liczba1, double liczba2)
{
    return liczba1+liczba2;
}

double odejmowanie(double liczba1, double liczba2)
{
    return liczba1-liczba2;
}

double objetosc_graniastoslupa(double podstawa1, double podstawa2, double wysokosc_p, double wysokosc_g)
{
    return (((podstawa1+podstawa2)*wysokosc_p)/2)*wysokosc_g;
}

void pomoc()
{
    cout << "Simple calculator [help]\n";
    cout << "Dzialania:\n";
    cout << "add [a] [b]\n \tDodawanie dwoch liczb ([a] i [b])\n\n";
    cout << "subtract [a] [b]\n \tOdejmowanie od siebie dwoch liczb ([a] od [b])\n\n";
    cout << "volume [a] [b] [h] [H]\n \tObliczanie objetosci graniastoslupa prostego o wysokosci [H] i podstawie trapezu (o podstawach [a] i [b],\n\twysokosci [h])\n";
}

double zamiana_string_double(string liczba)
{
    return stod(liczba);
}

void blad_argumenty()
{
    cout << "Zbyt mala liczba argumentow" << endl;
}
