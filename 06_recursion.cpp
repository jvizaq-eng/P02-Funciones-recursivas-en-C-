#include <iostream>
using namespace std;

int serie_recu(int n) {
    if (n == 1) {
        return 4; 
    } else if (n == 2) {
        return 6; 
    } else {
        return serie_recu(n - 1) + serie_recu(n - 2); 
    }
}

int main() {
    int n;
    cout << "Ingresa la posicion del termino deseado: ";
    cin >> n;

    if (n <= 0) {
        cout << "Por favor ingresa un numero entero mayor o igual a 1." << endl;
    } else {
        int resultado = serie_recu(n);
        cout << "El termino " << n << " de la serie es: " << resultado << endl;
    }

    return 0;
}