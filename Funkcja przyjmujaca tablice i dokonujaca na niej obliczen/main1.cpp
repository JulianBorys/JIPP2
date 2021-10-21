#include <iostream>
#include <cstdlib>
using namespace std;

int losowanie(int a, int b)
{
    srand(time( NULL ) );
    return a+rand()%(b-a+1);
}

void wypelnianie_tablicy(int tablica[], int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
    {
        tablica[i] = 1+rand()%100;
    }
}

void wyswietlanie_tablicy(int tablica[], int rozmiar)
{
    for(int i = 0; i < rozmiar; ++i)
    {
        cout << tablica[i] << " ";
    }
}


int wyszukiwanie_maks(int tablica[], int rozmiar)
{
    int maks = 0;
    for(int i = 0; i < rozmiar; ++i)
    {
        if(tablica[i] > maks)
            maks = tablica[i];
    }
    return maks;
}

void odwracanie_tablicy(int tablica[], int rozmiar)
{
    int temp;
    for(int i = 0; i < rozmiar/2; ++i)
    {
        temp = tablica[rozmiar-1-i];
        tablica[rozmiar-1-i] = tablica[i];
        tablica[i] = temp;
    }
}

int main()
{
    //Zadanie 1
    cout << "ZADANIE 1" << endl;
    int a,b;

    cout << "Podaj przedzial losowanych liczb: ";
    cin >> a >> b;

    cout << "Wylosowana liczba z przedzialu od " << a << " do " << b << " jest rowna: " <<  losowanie(a,b) << endl;


    //Zadanie 2
    cout << "\nZADANIE 2" << endl;

    int rozmiar;

    cout << "Podaj rozmiar tablicy:";
    cin >> rozmiar;

    int *tablica = new int[rozmiar];

    wypelnianie_tablicy(tablica, rozmiar);

    wyswietlanie_tablicy(tablica, rozmiar);
    cout << endl << "Element maksymalny tablicy jest rowny: " << wyszukiwanie_maks(tablica, rozmiar) << endl;

    //Zadanie 3
    cout << "\nZADANIE 3" << endl;

    odwracanie_tablicy(tablica, rozmiar);
    cout << "Tablica po odwroceniu:" << endl;
    wyswietlanie_tablicy(tablica, rozmiar);

    return 0;
}

