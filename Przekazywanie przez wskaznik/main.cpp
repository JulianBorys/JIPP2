#include <iostream>
using namespace std;

void srednia(int *a, int *b)
{
    *a = (*a+*b)/2;
}

void wypelnianie_tablicy(int *tablica, int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
    {
        cout << "Podaj wielkosc wieksza od 0: ";
        cin >> *tablica;
        tablica++;
    }

}

void wypisywanie_tablicy(int *tablica, int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
    {
        cout << *tablica << " ";
        tablica++;
    }
}

void wpisanie_do_wskaznika(int a, int *b)
{
    *b = a;
}

int main()
{
    //Zadanie 1
    cout << "ZADANIE 1\n";

    int a,b;
    int *wsk_a, *wsk_b;

    cout << "Podaj dwie liczby calkowite: ";
    cin >> a >> b;

    wsk_a = &a;
    wsk_b = &b;

    srednia(wsk_a,wsk_b);

    cout << "Srednia liczb a i b jest rowna: " << a;


    //Zadanie 2
    cout << "\n\nZADANIE 2\n";

    int rozmiar;
    cout << "Podaj wielkosc tablicy: ";
    cin >> rozmiar;

    int *tablica = new int[rozmiar];

    wypelnianie_tablicy(tablica, rozmiar);
    wypisywanie_tablicy(tablica, rozmiar);

    //Zadanie 3
    cout << "\n\nZADANIE 3\n";

    //Zadanie 4
    cout << "\n\nZADANIE 4\n";

    int x, cel;
    int *w = &cel;

    cout << "Podaj liczbe calkowita: ";
    cin >> x;

    wpisanie_do_wskaznika(x,w);
    cout << "Liczba wpisane do zmiennej wskazywanej przez wskaznik 'w' rowna sie: " << cel;


    return 0;
}
