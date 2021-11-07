#include <iostream>
#include <cstdlib>
using namespace std;

class Pamiec
{
public:
    int *tablica = new int [1024];
    Pamiec();
    ~Pamiec();
};

Pamiec:: Pamiec()
{
    cout << "cout nie zostal wywolany!" << endl;
    system("pause");
    cout << sizeof(tablica) << endl;
}

Pamiec:: ~Pamiec()
{
    cout << "Koniec programu!" << endl;
    delete [] tablica;
}

int main()
{
    Pamiec zadanie;

    return 0;
}
