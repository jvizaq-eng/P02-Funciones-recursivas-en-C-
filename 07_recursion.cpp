#include <iostream>
using namespace std;

int especular_recu(int n, int aux = 0) {
    if (n == 0) {
        return aux; // Caso base
    } else {
        return especular_recu(n / 10, aux * 10 + (n % 10)); 
    }
}

int main() {
    int n;
    cout << "Ingresa un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor ingresa un numero positivo." << endl;
    } else {
        int resultado = especular_recu(n);
        cout << "La imagen especular de " << n << " es: " << resultado << endl;
    }

    return 0;
}