#include <iostream>
#include <string>
using namespace std;

class Pojazd
{
private:

    string numer_rejestracyjny;
    string nazwa;
    int ilosc_miejsc;
    string *imie_nazwisko;
    string marka;
    string typ;
    static string najnowsza_wersja_oprogramowania;
    string zainstalowana_wersja_oprogramowania = "v1.0";

public:

    void wyswietlanie();
    void zmiana_miejsca(int miejsce, string *imie_nazwisko);
    void wypisz_wersje();
    void zmiana_wersji();
    static void opublikujNoweOprogramowanie(string nowa_wersja);

    Pojazd:: Pojazd()
    {
        cout << "Podaj numer rejestracyjny pojazdu: "; cin >> numer_rejestracyjny;
        cout << "Podaj nazwe pojazdu: "; cin >> nazwa;
        setnazwa_numerrejestracyjny(nazwa, numer_rejestracyjny);

        cout << "Podaj ilosc miejsc: "; cin >> ilosc_miejsc;
        imie_nazwisko = new string [ilosc_miejsc];

        for(int i = 0; i < ilosc_miejsc; i++)
        {
            cout << "Podaj imie i nazwisko pasazera numer " << i+1 << ": ";
            cin >> imie_nazwisko[i];
        }
        cout << "Podaj marke pojazdu: "; cin >> marka;
        cout << "Podaj typ pojazdu: "; cin >> typ;

        wyswietlanie();

        int zmiana;
        cout << endl;
        cout << "Ktorego pasazera chcesz zmienic?: "; cin >> zmiana;
        zmiana_miejsca(zmiana , &imie_nazwisko[zmiana - 1]);

        cout << endl;
        zmiana_wersji();
        opublikujNoweOprogramowanie("v5.0");
        wyswietlanie();
    }

    Pojazd(Pojazd &pojazd)
    {
        numer_rejestracyjny = pojazd.numer_rejestracyjny;
        nazwa = pojazd.nazwa;
        ilosc_miejsc = pojazd.ilosc_miejsc;
        imie_nazwisko = new string [pojazd.ilosc_miejsc];
        marka = pojazd.marka;
        typ = pojazd.typ;
    }

    //gettery
    string getnazwa()
    {
        return nazwa;
    }
    string getnumerrejestracyjny()
    {
        return numer_rejestracyjny;
    }
    string getmarka()
    {
        return marka;
    }
    string gettyp()
    {
        return typ;
    }

    //settery
    void setnazwa_numerrejestracyjny(string nazwa, string numerrejestracyjny)
    {
        this->nazwa = nazwa;
        this->numer_rejestracyjny = numerrejestracyjny;
    }
};

void Pojazd::wyswietlanie()
{
    cout << "--------------------------------------\n";
    cout << "Numer rejestracyjny: " << getnumerrejestracyjny() << endl;
    cout << "Nazwa pojazdu: " << getnazwa() << endl;
    cout << "Ilosc miejsc w pojezdzie: " << ilosc_miejsc << endl;
    cout << "Pasazerowie:\n";
    for(int i = 0; i < ilosc_miejsc; i++)
        cout << i+1 << ". " << imie_nazwisko[i] << endl;
    cout << "Marka pojazdu: " << getmarka() << endl;
    cout << "Typ pojazdu: " << gettyp() << endl;
    cout << "---------------------------------------\n";
    wypisz_wersje();
    cout << "Najnowsza wersja: " << najnowsza_wersja_oprogramowania << endl;
}

void Pojazd::zmiana_miejsca(int miejsce, string *imie_nazwisko)
{
    cout << "Zmiana informacji o pasazerze na miejscu " << miejsce << ".\n";
    cout << "Podaj nowe imie i nazwisko: "; cin >> *imie_nazwisko;
}

void Pojazd::wypisz_wersje()
{
    cout << "Aktualna wersja oprogramowania: " << zainstalowana_wersja_oprogramowania << endl;
}

void Pojazd::zmiana_wersji()
{
    zainstalowana_wersja_oprogramowania = najnowsza_wersja_oprogramowania;
}

void Pojazd::opublikujNoweOprogramowanie(string nowa_wersja)
{
    najnowsza_wersja_oprogramowania = nowa_wersja;
}

string Pojazd::najnowsza_wersja_oprogramowania  = "v4.0";

int main()
{
    Pojazd samochod;

    return 0;
}
