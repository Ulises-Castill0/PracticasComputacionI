// Castillo Gomez Jesus Ulises 
// ulis3s*******0@gmail.com
// Octubre 11, 2020


#include <iostream>
using namespace std;

int main() {

    int n1, n2;
    char o;

    cout << "Bienvenido a Caclculadora \n";
    cout << "Ingrese su primer numero: \n";
    cin >> n1;
    cout << "Ingrese la opecacion (Suma +, Resta -, Multiplicacion *, Division /, Modulo %).\n";
    cin >> o;
    cout << "Ingrese su segundo numero: \n";
    cin >> n2;


    if (o == '+') {
        cout << "Resultado:\n";
        cout << n1 << "+" << n2 << "=" << n1 + n2 << endl;
    }
    else if (o == '-') {
        cout << "Resultado:\n";
        cout << n1 << "-" << n2 << "=" << n1 - n2 << endl;
    }
    else if (o == '*') {
        cout << "Resultado:\n";
        cout << n1 << "*" << n2 << "=" << n1 * n2 << endl;
    }
    else if (o == '/') {
        if (n2 == 0) {
            cout << "Tranquilo! tratas de dividir entre 0, piensalo mejor\n";
            return 0;
        }
        cout << "Resultado:\n";
        cout << n1 << "/" << n2 << "=" << n1 / n2 << endl;
    }
    else if (o == '%') {
        if (n2 == 0) {
            cout << "Tranquilo! tratas de dividir entre 0, piensalo mejor\n";
            return 0;
        }
        cout << "Resultado:\n";
        cout << n1 << "%" << n2 << "=" << n1 % n2 << endl;
    }
    else {
        cout << ":) Esa operacion no esta contemplada \n";

    }

    return 0;
}
