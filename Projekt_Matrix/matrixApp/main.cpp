#include "../matrixLib/include/lib/matrixlib.h"

int main(int argc, char *argv[])
{
    char typ_danych;

    if(strcmp(argv[1], "addMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze, kolumny;
            cout << "Dodawanie mozna wykonac na macierzach o takich samych wymiarach\n";
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            double **macierz2 = new double *[wiersze];
            double **macierz_wynikowa = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new double[kolumny];
                macierz2[i] = new double[kolumny];
                macierz_wynikowa[i] = new double[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1.0);
            macierz2 = tworzenie_macierzy(wiersze, kolumny, 2.0);

            macierz_wynikowa = addMatrix(macierz1, macierz2, kolumny, wiersze);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz2[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Dodawanie mozna wykonac na macierzach o takich samych wymiarach\n";
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            int **macierz2 = new int *[wiersze];
            int **macierz_wynikowa = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new int[kolumny];
                macierz2[i] = new int[kolumny];
                macierz_wynikowa[i] = new int[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1);
            macierz2 = tworzenie_macierzy(wiersze, kolumny, 2);

            macierz_wynikowa = addMatrix(macierz1, macierz2, kolumny, wiersze);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz2[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "subtractMatrix") == 0 )
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze, kolumny;
            cout << "Odejmowanie mozna wykonac na macierzach o takich samych wymiarach\n";
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            double **macierz2 = new double *[wiersze];
            double **macierz_wynikowa = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new double[kolumny];
                macierz2[i] = new double[kolumny];
                macierz_wynikowa[i] = new double[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1.0);
            macierz2 = tworzenie_macierzy(wiersze, kolumny, 2.0);

            macierz_wynikowa = subtractMatrix(macierz1, macierz2, kolumny, wiersze);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz2[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Odejmowanie mozna wykonac na macierzach o takich samych wymiarach\n";
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            int **macierz2 = new int *[wiersze];
            int **macierz_wynikowa = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new int[kolumny];
                macierz2[i] = new int[kolumny];
                macierz_wynikowa[i] = new int[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1);
            macierz2 = tworzenie_macierzy(wiersze, kolumny, 2);

            macierz_wynikowa = subtractMatrix(macierz1, macierz2, kolumny, wiersze);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz2[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "multiplyMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze_m1, kolumny_m1, wiersze_m2, kolumny_m2;
            cout << "Podaj wymiary macierzy 1: ";
            cin >> wiersze_m1 >> kolumny_m1;
            cout << "Podaj wymiary macierzy 2: ";
            cin >> wiersze_m2 >> kolumny_m2;


            double **macierz1 = new double *[wiersze_m1];
            double **macierz2 = new double *[wiersze_m2];
            double **macierz_wynikowa = new double *[wiersze_m1];
            for(int i = 0; i < wiersze_m1; ++i)
            {
                macierz1[i] = new double[kolumny_m1];
                macierz_wynikowa[i] = new double[kolumny_m2];
            }
            for(int i = 0; i < wiersze_m2; ++i)
                macierz2[i] = new double[kolumny_m2];

            macierz1 = tworzenie_macierzy(wiersze_m1, kolumny_m1, 1.0);
            macierz2 = tworzenie_macierzy(wiersze_m2, kolumny_m2, 2.0);

            macierz_wynikowa = multiplyMatrix(macierz1, macierz2, wiersze_m1, kolumny_m1, kolumny_m2);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze_m1, kolumny_m2);

            for(int i = 0; i < wiersze_m1; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            for(int i = 0; i < wiersze_m2; ++i)
                delete [] macierz2[i];

            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze_m1, kolumny_m1, wiersze_m2, kolumny_m2;
            cout << "Podaj wymiary macierzy 1: ";
            cin >> wiersze_m1 >> kolumny_m1;
            cout << "Podaj wymiary macierzy 2: ";
            cin >> wiersze_m2 >> kolumny_m2;


            int **macierz1 = new int *[wiersze_m1];
            int **macierz2 = new int *[wiersze_m2];
            int **macierz_wynikowa = new int *[wiersze_m1];
            for(int i = 0; i < wiersze_m1; ++i)
            {
                macierz1[i] = new int[kolumny_m1];
                macierz_wynikowa[i] = new int[kolumny_m2];
            }
            for(int i = 0; i < wiersze_m2; ++i)
                macierz2[i] = new int[kolumny_m2];

            macierz1 = tworzenie_macierzy(wiersze_m1, kolumny_m1, 1);
            macierz2 = tworzenie_macierzy(wiersze_m2, kolumny_m2, 2);

            macierz_wynikowa = multiplyMatrix(macierz1, macierz2, wiersze_m1, kolumny_m1, kolumny_m2);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze_m1, kolumny_m2);

            for(int i = 0; i < wiersze_m1; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            for(int i = 0; i < wiersze_m2; ++i)
                delete [] macierz2[i];
            delete [] macierz1;
            delete [] macierz2;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "multiplyByScalar") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            double **macierz_wynikowa = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new double[kolumny];
                macierz_wynikowa[i] = new double[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1.0);

            double skalar;
            cout << "Podaj skalar: ";
            cin >> skalar;

            macierz_wynikowa = multiplyByScalar(macierz1, wiersze, kolumny, skalar);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            int **macierz_wynikowa = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new int[kolumny];
                macierz_wynikowa[i] = new int[kolumny];
            }

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1);

            int skalar;
            cout << "Podaj skalar: ";
            cin >> skalar;

            macierz_wynikowa = multiplyByScalar(macierz1, wiersze, kolumny, skalar);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "transpozeMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            double **macierz_wynikowa = new double *[kolumny];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new double[kolumny];
            }
            for(int i = 0; i < kolumny; ++i)
                macierz_wynikowa[i] = new double[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1.0);

            macierz_wynikowa = transpozeMatrix(macierz1, wiersze, kolumny);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, kolumny, wiersze);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            int **macierz_wynikowa = new int *[kolumny];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new int[kolumny];
            }
            for(int i = 0; i < kolumny; ++i)
                macierz_wynikowa[i] = new int[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1);

            macierz_wynikowa = transpozeMatrix(macierz1, wiersze, kolumny);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, kolumny, wiersze);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "powerMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze;
            cout << "Potegowac mozna tylko macierze kwadratowe\n";
            cout << "Podaj wymiary macierzy (podaj tylko jedna wartosc): ";
            cin >> wiersze;

            double **macierz1 = new double *[wiersze];
            double **macierz_wynikowa = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new double[wiersze];
                macierz_wynikowa[i] = new double[wiersze];
            }

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1.0);

            unsigned int potega;
            cout << "Podaj potege: ";
            cin >> potega;

            macierz_wynikowa = powerMatrix(macierz1, wiersze, wiersze, potega);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, wiersze);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }

        if(typ_danych = 'i')
        {
            int wiersze;
            cout << "Potegowac mozna tylko macierze kwadratowe\n";
            cout << "Podaj wymiary macierzy (podaj tylko jedna wartosc): ";
            cin >> wiersze;

            int **macierz1 = new int *[wiersze];
            int **macierz_wynikowa = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
            {
                macierz1[i] = new int[wiersze];
                macierz_wynikowa[i] = new int[wiersze];
            }

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1);

            unsigned int potega;
            cout << "Podaj potege: ";
            cin >> potega;

            macierz_wynikowa = powerMatrix(macierz1, wiersze, wiersze, potega);
            cout << endl;
            wyswietlanie_macierzy(macierz_wynikowa, wiersze, wiersze);

            for(int i = 0; i < wiersze; ++i)
            {
                delete [] macierz1[i];
                delete [] macierz_wynikowa[i];
            }
            delete [] macierz1;
            delete [] macierz_wynikowa;
        }
    }

    if(strcmp(argv[1], "determinantMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze;
            cout << "Wyznacznik mozna policzyc jedynie z macierzy kwadratowej\n";
            cout << "Podaj wymiary macierzy (wystarczy jedna wartosc): ";
            cin >> wiersze;

            double **macierz1 = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new double[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1.0);

            double determinant;
            determinant = determinantMatrix(macierz1, wiersze, wiersze);
            cout << endl << "Wyznacznik macierzy rowna sie: " << determinant;

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }

        if(typ_danych = 'i')
        {
            int wiersze;
            cout << "Wyznacznik mozna policzyc jedynie z macierzy kwadratowej\n";
            cout << "Podaj wymiary macierzy (wystarczy jedna wartosc): ";
            cin >> wiersze;

            int **macierz1 = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new int[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1);

            int determinant;
            determinant = determinantMatrix(macierz1, wiersze, wiersze);
            cout << endl << "Wyznacznik macierzy rowna sie: " << determinant;

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }
    }

    if(strcmp(argv[1], "matrixIsDiagonal") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            double wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new double[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1.0);

            bool diagonalna = matrixIsDiagonal(macierz1, wiersze, kolumny);

            cout << endl;
            if (diagonalna == true)
                cout << "Macierz jest diagonalna\n";
            if(diagonalna == false)
                cout << "Macierz nie jest diagonalna\n";

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new int[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, wiersze, 1);

            bool diagonalna = matrixIsDiagonal(macierz1, wiersze, kolumny);

            cout << endl;
            if(diagonalna == true)
                cout << "Macierz jest diagonalna\n";
            if(diagonalna == false)
                cout << "Macierz nie jest diagonalna\n";

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }
    }

    if(strcmp(argv[1], "sortRowsInMatrix") == 0)
    {
        cout << "Wybierz -d dla double lub -i dla int: ";
        cin >> typ_danych;

        if(typ_danych = 'd')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            double **macierz1 = new double *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new double[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1.0);

            sortRowsInMatrix(macierz1, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                for(int j = 0; j < kolumny; ++j)
                    cout << macierz1[i][j] << " ";
                cout << endl;
            }

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }

        if(typ_danych = 'i')
        {
            int wiersze, kolumny;
            cout << "Podaj wymiary macierzy: ";
            cin >> wiersze >> kolumny;

            int **macierz1 = new int *[wiersze];
            for(int i = 0; i < wiersze; ++i)
                macierz1[i] = new int[wiersze];

            macierz1 = tworzenie_macierzy(wiersze, kolumny, 1);

            sortRowsInMatrix(macierz1, wiersze, kolumny);

            for(int i = 0; i < wiersze; ++i)
            {
                for(int j = 0; j < kolumny; ++j)
                    cout << macierz1[i][j] << " ";
                cout << endl;
            }

            for(int i = 0; i < wiersze; ++i)
                delete [] macierz1[i];

            delete [] macierz1;
        }
    }

    else
        help();

    return 0;
}
