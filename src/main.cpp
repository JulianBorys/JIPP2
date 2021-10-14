#include <iostream>
using namespace std;

#include "../include/calc.h"

int main(int argc, char *argv[])
{
    if(strcmp(argv[1],"add") == 0)
    {
        if(argc == 4)
        {
            cout << "Wynik dodawania (a+b) rowna sie: ";
            cout << dodawanie(zamiana_string_double(argv[2]), zamiana_string_double(argv[3]));
        }

        else
            blad_argumenty();
    }

    if(strcmp(argv[1],"subtract") == 0)
    {
        if(argc == 4)
        {
            cout << "Wynik odejmowania (a-b) rowna sie: ";
            cout << odejmowanie(zamiana_string_double(argv[2]), zamiana_string_double(argv[3]));
        }

        else
            blad_argumenty();

    }

    if(strcmp(argv[1],"volume") == 0)
    {
        if(argc == 6)
        {
            cout << "Objetosc graniastoslupa prostego o podstawie trapezu rowna sie: ";
            cout << objetosc_graniastoslupa(zamiana_string_double(argv[2]), zamiana_string_double(argv[3]),
                                            zamiana_string_double(argv[4]), zamiana_string_double(argv[5]));
        }

        else
            blad_argumenty();

    }

    if(strcmp(argv[1],"help") == 0)
    {
        pomoc();
    }

    return 0;
}
