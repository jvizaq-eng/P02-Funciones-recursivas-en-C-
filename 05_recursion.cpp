#include <iostream>
using namespace std;

void binario_recu(int n) {
    if (n < 2) {
        cout << n; 
    } else {
        binario_recu(n / 2); 
        cout << n % 2;
    }
}

int main() {
    int n;
    cout << "Ingresa un numero entero en base 10: ";
    cin >> n;

    if (n < 0) {
        cout << "Ingresa un numero mayor o igual a 0." << endl;
    } else {
        cout << "El equivalente en binario es: ";
        binario_recu(n);
        cout << endl;
    }

    return 0;
}