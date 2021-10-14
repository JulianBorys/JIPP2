#include <iostream>
using namespace std;

int main()
{
    //Wyświetlanie JiPP2 5 razy na ekranie
    int i;
    for(i = 0; i < 5; ++i)
    {
        cout << "JiPP2 ";
    }
    cout << endl;

    //Inicjowanie wielkości tablicy
    int rozmiar;
    cout << "Podaj rozmiar tablicy:";
    cin >> rozmiar;

    //Tworzenie dynamicznej tablicy dwuwymiarowej
    int **tablica = new int *[rozmiar];
    for(i = 0; i < rozmiar; ++i)
        tablica[i] = new int[rozmiar];

    //Wypełnianie tablicy
    for(i = 0; i < rozmiar; ++i)
    {
        for(int j = 0; j < rozmiar; ++j)
            tablica[i][j] = j;
    }

    //Wyświetlanie tablicy
    for(i = 0; i < rozmiar; ++i)
    {
        for(int j = 0; j < rozmiar; ++j)
            cout << tablica[i][j] << " ";
        cout << endl;
    }

    //Usuwanie tablicy
    for(i = 0; i < rozmiar; ++i)
        delete [] tablica [i];
    delete [] tablica;

    return 0;
}
