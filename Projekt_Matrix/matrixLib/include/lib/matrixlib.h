#include <iostream>
#include <cmath>
using namespace std;

int **tworzenie_macierzy(int wiersze, int kolumny, int numer_m);
double **tworzenie_macierzy(int wiersze, int kolumny, double numer_m);

void wyswietlanie_macierzy(int **macierz, int wiersze, int kolumny);
void wyswietlanie_macierzy(double **macierz, int wiersze, int kolumny);

int **addMatrix (int **matrix1, int **matrix2, int kolumny, int wiersze);
double **addMatrix (double **matrix1, double **matrix2, int kolumny, int wiersze);

int **subtractMatrix (int **matrix1, int **matrix2, int kolumny, int wiersze);
double **subtractMatrix (double **matrix1, double **matrix2, int kolumny, int wiersze);

int **multiplyMatrix(int **matrix1, int **matrix2, int wiersze_m1, int kolumny_m1, int kolumny_m2);
double **multiplyMatrix(double **matrix1, double **matrix2, int wiersze_m1, int kolumny_m1, int kolumny_m2);

int **multiplyByScalar(int **matrix1, int wiersze, int kolumny, int skalar);
double **multiplyByScalar(double **matrix1, int wiersze, int kolumny, double skalar);

int **transpozeMatrix(int **matrix1, int wiersze, int kolumny);
double **transpozeMatrix(double **matrix1, int wiersze, int kolumny);

int **powerMatrix(int **matrix1, int wiersze, int kolumny, unsigned int potega);
double **powerMatrix(double **matrix1, int wiersze, int kolumny, unsigned int potega);

int determinantMatrix(int **matrix1, int wiersze, int kolumny);
double determinantMatrix(double **matrix1, int wiersze, int kolumny);

bool matrixIsDiagonal(int **matrix1, int wiersze, int kolumny);
bool matrixIsDiagonal(double **matrix1, int wiersze, int kolumny);

void swap(int *liczba_a, int *liczba_b);
void swap(double *liczba_a, double *liczba_b);

void sortRow(int *tablica, int kolumny);
void sortRow(double *tablica, int kolumny);

int **sortRowsInMatrix (int **matrix1, int wiersze, int kolumny);
double **sortRowsInMatrix (double **matrix1, int wiersze, int kolumny);

void help();

