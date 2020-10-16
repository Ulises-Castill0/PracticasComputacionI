// Castillo Gomez Jesus Ulises
// ulis3s*******0@gmail.com
// 16 de Octubre de 2020


#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    
    int n1, n2;
   
    cout << "Operaciones entre matrices de dimenciones iguales \n";
    cout << "Para ambas matrices \n";
    cout << "Numero de filas \n";
    cin >> n1;
    cout << "Numero de columnas \n";
    cin >> n2;

    const int f = n1;
    const int c = n2;

    int A[f][c] = {};
    int B[f][c] = {};

    srand((int)time(0));

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            A[i][j] = (rand() % 100) + 1;
            B[i][j] = (rand() % 100) + 1;
        }
    }

    cout << "Matriz A \n";
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << "  ";
        } cout << "\n";
    }

    cout << "Matriz B \n";
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << B[i][j] << "  ";
        } cout << "\n";
    }
 
    char op;

    cout << " Ingrese la opecacion a realizar (Suma +, Resta -, Multiplicacion *, Division /)." << endl;
    cin >> op;
    cout << " Resultado:" << endl;
    
    if (op == '+')
    {
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j] + B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '-')
    {
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j] - B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '*')
    {
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j] * B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '/')
    {
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << A[i][j] / B[i][j] << "  ";
            } cout << endl;
        }
    }

    return 0;
}
