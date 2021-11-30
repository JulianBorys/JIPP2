#include "klasy.h"

int main()
{
    Note *notatka = new TextNote;

    notatka->setTitle("TYTUL");
    cout << notatka->getTitle();

    notatka->setContent("To jest tresc notatki");
    cout << endl << notatka->getContent();
    return 0;
}
