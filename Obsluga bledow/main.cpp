#include <iostream>
using namespace std;

int dzielenie(int a, int b)
{
    if(b == 0)
        throw "Dzielenie przez zero";
    if(a % b != 0)
        throw "Dzielenie nie miesci sie w int (wynik jest ulamkiem)";

    return a/b;
}

int zamiana_tekst_liczba(const char *tekst)
{
    int a = 0;

    for(int i = 0; tekst[i]; i++)
    {
        if(a * 10 < 0)
            throw "Wprowadzona liczba jest za duza";

        if(tekst[i] >= '0' && tekst[i] <= '9')
        {
            a = a * 10 + tekst[i] - '0';
        }

        else
            throw "Wprowadzony ciag zawiera nieprawidlowe znaki";
    }

    return a;
}

int main()
{
    //Zadanie 1
    cout << "ZADANIE 1\n";

    int a,b;

    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    try
    {
        int c = dzielenie(a,b);
        cout << "Wynik dzielenia a przez b jest rowny: " << c;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    //Zadanie 2
    cout << "\nZADANIE 2\n";

    char *tekst = new char[64];

    cin >> tekst;

    try
    {
        cout << endl << zamiana_tekst_liczba(tekst);
    }

    catch(const char *msg)
    {
        cout << msg;
    }

    return 0;
}
