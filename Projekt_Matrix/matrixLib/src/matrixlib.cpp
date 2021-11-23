#include "lib/matrixlib.h"

int **tworzenie_macierzy(int wiersze, int kolumny, int numer_m)
{
    int **macierz = new int *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        macierz[i] = new int[kolumny];

    int ilosc_wartosci = 0;


    cout << "Podaj wartosci dla macierzy " << numer_m << endl;

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
        {
            cin >> macierz[i][j];
            while (cin.fail())
            {
                cout<< "Podales bledna wartosc " << endl;
                cin.clear();
                cin.ignore();

                cout << "Podaj poprawna wartosc: ";
                cin >> macierz[i][j];

            }
            ilosc_wartosci++;
        }
    }

    if(ilosc_wartosci != (wiersze * kolumny))
        throw "Nieodpowiednia ilosc liczb";

    return macierz;
}
double **tworzenie_macierzy(int wiersze, int kolumny, double numer_m)
{
    double **macierz = new double *[wiersze];
    for (int i = 0; i < wiersze; ++i)
        macierz[i] = new double[kolumny];

    int ilosc_wartosci = 0;
    cout << "Podaj wartosci dla macierzy " << numer_m << endl;

    for (int i = 0; i < wiersze; ++i)
    {
        for (int j = 0; j < kolumny; ++j)
        {
            cin >> macierz[i][j];
            while (cin.fail())
            {
                cout << "Podales wartosc nieliczbowa " << endl;
                cin.clear();
                cin.ignore();

                cout << "Podaj poprawna wartosc: ";
                cin >> macierz[i][j];

            }
            ilosc_wartosci++;
        }
    }

    if (ilosc_wartosci != (wiersze * kolumny))
        throw "Nieodpowiednia ilosc liczb";

    return macierz;
}

void wyswietlanie_macierzy(int **macierz, int wiersze, int kolumny)
{
    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }
}
void wyswietlanie_macierzy(double **macierz, int wiersze, int kolumny)
{
    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }
}

int **addMatrix (int **matrix1, int **matrix2, int kolumny, int wiersze)
{
    int **wynikowa = new int *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new int[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            wynikowa[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    return wynikowa;
}
double **addMatrix (double **matrix1, double **matrix2, int kolumny, int wiersze)
{
    double **wynikowa = new double *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new double[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            wynikowa[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    return wynikowa;
}

int **subtractMatrix (int **matrix1, int **matrix2, int kolumny, int wiersze)
{
    int **wynikowa = new int *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new int[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            wynikowa[i][j] = matrix1[i][j] - matrix2[i][j];
    }
    return wynikowa;
}
double **subtractMatrix (double **matrix1, double **matrix2, int kolumny, int wiersze)
{
    double **wynikowa = new double *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new double[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
            wynikowa[i][j] = matrix1[i][j] - matrix2[i][j];
    }
    return wynikowa;
}

int **multiplyMatrix(int **matrix1, int **matrix2, int wiersze_m1, int kolumny_m1, int kolumny_m2)
{
    int **wynikowa = new int *[wiersze_m1];
    for(int i = 0; i < wiersze_m1; ++i)
        wynikowa[i] = new int[kolumny_m2];

    int suma;

    for(int i = 0; i < wiersze_m1; ++i)
    {
        for(int j = 0; j < kolumny_m2; ++j)
        {
            suma = 0;
            for (int k = 0; k < kolumny_m1; ++k)
            {
                suma = suma + matrix1[i][k] * matrix2[k][j];
            }

            wynikowa[i][j] = suma;
        }
    }
    return wynikowa;
}
double **multiplyMatrix(double **matrix1, double **matrix2, int wiersze_m1, int kolumny_m1, int kolumny_m2)
{
    double **wynikowa = new double *[wiersze_m1];
    for(int i = 0; i < wiersze_m1; ++i)
        wynikowa[i] = new double[kolumny_m2];

    double suma;

    for(int i = 0; i < wiersze_m1; ++i)
    {
        for(int j = 0; j < kolumny_m2; ++j)
        {
            suma = 0;
            for (int k = 0; k < kolumny_m1; ++k)
            {
                suma = suma + matrix1[i][k] * matrix2[k][j];
            }
            wynikowa[i][j] = suma;
        }
    }
    return wynikowa;
}

int **multiplyByScalar(int **matrix1, int wiersze, int kolumny, int skalar)
{
    int **wynikowa = new int *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new int[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
        {
            wynikowa [i][j] = matrix1[i][j] * skalar;
        }
    }
    return wynikowa;
}
double **multiplyByScalar(double **matrix1, int wiersze, int kolumny, double skalar)
{
    double **wynikowa = new double *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new double[kolumny];

    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
        {
            wynikowa [i][j] = matrix1[i][j] * skalar;
        }
    }
    return wynikowa;
}

int **transpozeMatrix(int **matrix1, int wiersze, int kolumny)
{
    int **wynikowa = new int *[kolumny];
    for(int i = 0; i < kolumny; ++i)
        wynikowa[i] = new int[wiersze];

    for(int i = 0; i < kolumny; ++i)
    {
        for(int j = 0; j < wiersze; ++j)
            wynikowa[i][j] = matrix1[j][i];
    }
    return wynikowa;
}
double **transpozeMatrix(double **matrix1, int wiersze, int kolumny)
{
    double **wynikowa = new double *[kolumny];
    for(int i = 0; i < kolumny; ++i)
        wynikowa[i] = new double[wiersze];

    for(int i = 0; i < kolumny; ++i)
    {
        for(int j = 0; j < wiersze; ++j)
            wynikowa[i][j] = matrix1[j][i];
    }
    return wynikowa;
}

int **powerMatrix(int **matrix1, int wiersze, int kolumny, unsigned int potega)
{
    int **wynikowa = new int *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new int[kolumny];

    for(int i = 0; i < potega - 1; ++i)
    {
        wynikowa = multiplyMatrix(matrix1, matrix1, wiersze, kolumny, kolumny);
    }
    return wynikowa;
}
double **powerMatrix(double **matrix1, int wiersze, int kolumny, unsigned int potega)
{
    double **wynikowa = new double *[wiersze];
    for(int i = 0; i < wiersze; ++i)
        wynikowa[i] = new double[kolumny];

    for(int i = 0; i < potega - 1; ++i)
    {
        wynikowa = multiplyMatrix(matrix1, matrix1, wiersze, kolumny, kolumny);
    }
    return wynikowa;
}

int determinantMatrix(int **matrix1, int wiersze, int kolumny)
{
    int determinant = 0;

    if (wiersze == 2 && kolumny == 2)
        return ((matrix1[0][0] * matrix1[1][1]) - (matrix1[1][0] * matrix1[0][1]));

    else
    {
        int **submatrix = new int *[wiersze];
        for(int i = 0; i < wiersze; ++i)
            submatrix [i] = new int [wiersze];

        for (int x = 0; x < wiersze; ++x)
        {
            int subi = 0;
            for (int i = 1; i < wiersze; ++i)
            {
                int subj = 0;
                for (int j = 0; j < wiersze; ++j)
                {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix1[i][j];
                    subj++;
                }
                subi++;
            }
            determinant = determinant + (pow(-1, x) * matrix1[0][x] * determinantMatrix(submatrix, wiersze - 1, wiersze -1));
        }
    }
    return determinant;
}
double determinantMatrix(double **matrix1, int wiersze, int kolumny)
{
    double determinant = 0;

    if (wiersze == 2 && kolumny == 2)
        return ((matrix1[0][0] * matrix1[1][1]) - (matrix1[1][0] * matrix1[0][1]));

    else
    {
        double **submatrix = new double *[wiersze];
        for(int i = 0; i < wiersze; ++i)
            submatrix [i] = new double [wiersze];

        for (int x = 0; x < wiersze; ++x)
        {
            int subi = 0;
            for (int i = 1; i < wiersze; ++i)
            {
                int subj = 0;
                for (int j = 0; j < wiersze; ++j)
                {
                    if (j == x)
                        continue;
                    submatrix[subi][subj] = matrix1[i][j];
                    subj++;
                }
                subi++;
            }
            determinant = determinant + (pow(-1, x) * matrix1[0][x] * determinantMatrix(submatrix, wiersze - 1, wiersze -1));
        }
    }
    return determinant;
}

bool matrixIsDiagonal(int **matrix1, int wiersze, int kolumny)
{
    bool diagonalna = true;
    for(int i = 0; i < wiersze; ++i)
    {
        if(wiersze != kolumny)
        {
            diagonalna = false;
            break;
        }

        for(int j = 0; j < kolumny; ++j)
            if(i != j)
                if(matrix1[i][j] != 0)
                {
                    diagonalna = false;
                    break;
                }
    }
    return diagonalna;
}
bool matrixIsDiagonal(double **matrix1, int wiersze, int kolumny)
{
    bool diagonalna = true;
    for(int i = 0; i < wiersze; ++i)
    {
        if(wiersze != kolumny)
        {
            diagonalna = false;
            break;
        }

        for(int j = 0; j < kolumny; ++j)
            if(i != j)
                if(matrix1[i][j] != 0)
                {
                    diagonalna = false;
                    break;
                }
    }
    return diagonalna;
}

void swap(int *liczba_a, int *liczba_b)
{
    int *temp = 0;
    liczba_a = temp;
    liczba_a = liczba_b;
    liczba_b = temp;
}
void swap(double *liczba_a, double *liczba_b)
{
    double *temp = 0;
    liczba_a = temp;
    liczba_a = liczba_b;
    liczba_b = temp;
}

void sortRow(int *tablica, int kolumny)
{
    for(int i = 0; i < kolumny; ++i)
    {
        for(int j = 1; j < kolumny - i; ++j)
            if(tablica[j-1] > tablica[j])
                swap(tablica[j-1], tablica[j]);
    }
}
void sortRow(double *tablica, int kolumny)
{
    for(int i = 0; i < kolumny; ++i)
    {
        for(int j = 1; j < kolumny - i; ++j)
            if(tablica[j-1] > tablica[j])
                swap(tablica[j-1], tablica[j]);
    }
}

int **sortRowsInMatrix (int **matrix1, int wiersze, int kolumny)
{
    int *temp = new int [kolumny];
    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
        {
            temp[j] = matrix1[i][j];
        }
        sortRow(temp, kolumny);

        for(int j = 0; j < kolumny; ++j)
            matrix1[i][j] = temp[j];
    }
    delete [] temp;

    return matrix1;
}
double **sortRowsInMatrix (double **matrix1, int wiersze, int kolumny)
{
    double *temp = new double[kolumny];
    for(int i = 0; i < wiersze; ++i)
    {
        for(int j = 0; j < kolumny; ++j)
        {
            temp[j] = matrix1[i][j];
        }
        sortRow(temp, kolumny);

        for(int j = 0; j < kolumny; ++j)
            matrix1[i][j] = temp[j];
    }
    delete [] temp;

    return matrix1;
}

void help()
{
    cout << "\t\tProjekt Matrix\n";
    cout << "Wczytywanie macierzy dziala w nastepujacy sposob:\n";
    cout << "1. Najpierw uzytkownik proszony jest o wymiary macierzy (liczba wierszy, liczba kolumn)\n";
    cout << "2. Uzytkownik wypelnia kolejne wiersze macierzy liczbami. Kazda liczba powinna byc zatwierdzona enterem \n";
    cout << "Przed kazdym wczytaniem uzytkownik zostanie poproszony o podanie typu danych.\n\n";
    cout << "Mozliwe dzialania:\n";
    cout << "1. addMatrix\n Dodawanie dwoch macierzy o takich samych wymiarach\n";
    cout << "2. subtractMatrix\n Odejmowanie 1 macierzy od 2 macierzy. Macierze musza byc o takich samych wymiarach\n";
    cout << "3. multiplyMatrix\n Mnozenie 2 macierzy. Macierz wynikowa bedzie miala wiersze 1 i kolumny 2\n";
    cout << "4. multiplyByScalar\n Mnozenie macierzy przez skalar\n";
    cout << "5. transpozeMatrix\n Transponowanie macierzy. Odwrocenie wierszy z kolumnami\n";
    cout << "6. powerMatrix\n Podnoszenie macierzy do podanej potegi\n";
    cout << "7. determinantMatrix\n Wyznaczanie wyznacznika macierzy. Moze zostac policzona jedynie z macierzy kwadratowej\n";
    cout << "8. matrixIsDiagonal\n Sprawdzanie czy macierz jest diagonalizowalna\n";
    cout << "9. sortRowsInMatrix\n Sortowanie macierzy po wierszach. Wykorzystuje funkcje ""swap"" i ""sortRow""\n";
    cout << "---------------------------------------------------------------------------------------------------------------\n";
}

