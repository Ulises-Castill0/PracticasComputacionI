// Castillo Gomez Jesus Ulises
// 29 de Octubre de 2020

#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz& miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz& miMatriz);

template <typename matriz>
void GaussJordan(matriz& miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz& miMatriz);

int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz& miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz& miMatriz)
{
   
    cout << "Solucion:" << "\n";
   
    for (int i = 0; i < 3; i++) {
        cout << "x" << i << " = " << miMatriz[i][3] << "\n";
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz& miMatriz)
{
    const int n = 3;
    float mult; 
    int QC = 0;
    float det;
    
    det =  miMatriz[0][0] * (miMatriz[1][1] * miMatriz[2][2] - miMatriz[2][1] * miMatriz[1][2]) 
          -miMatriz[0][1] * (miMatriz[1][0] * miMatriz[2][2] - miMatriz[2][0] * miMatriz[1][2])
          +miMatriz[0][2] * (miMatriz[1][0] + miMatriz[2][1] - miMatriz[2][0] * miMatriz[1][1]);

    if (det == 0) {
        cout << "Sistema sin solucion :(" << "\n";
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (miMatriz[i][i] != 0)
            {
                QC = 0;
            }
            else
            {
                QC = 1;
            }
        }
    }

    if (QC == 1)
    {
        array <array<float, n + 1>, n> A = {};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n + 1; j++)
            {
                A[i][j] = miMatriz[i][j];
            }
        }
        for (int j = 0; j < n + 1; j++)
        {
            miMatriz[0][j] = A[1][j];
            miMatriz[1][j] = A[2][j];
            miMatriz[2][j] = A[0][j];
        }
    }

    for (int x = 0; x < n; x++) {
        mult = miMatriz[x][x];
        for (int j = x; j < n + 1; j++) {
            miMatriz[x][j] = miMatriz[x][j] / mult;
        }
        for (int i = 0; i < n; i++) {
            if (i != x) {
                mult = miMatriz[i][x];
                for (int j = 0; j < n + 1; j++) {
                    miMatriz[i][j] = miMatriz[i][j] - mult * miMatriz[x][j];
                }
            }
        }
    }
}
