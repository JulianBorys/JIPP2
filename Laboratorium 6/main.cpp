#include "naglowek.h"

int main()
{
    Node a,b;

    a.upadateValue(2.2,2.1);
    b.upadateValue(5.5,1.2);

    cout << "Wsporzedne punktu a: " << endl;
    a.display();

    cout << "Wsporzedne punktu b: " << endl;
    b.display();

    cout << "Odleglosc punktu b od punktu a rowna sie: " << pointsDistance(a,b);

    return 0;
}
