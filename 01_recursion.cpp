#include <iostream>
using namespace std;

int potencia_recu(int x, int n) {
    if (n == 0) {
        return 1; 
    } else {
        return x * potencia_recu(x, n - 1); 
    }
}

int main() {
    int x, n;
    
    cout << "Ingresa la base (x): ";
    cin >> x;
    cout << "Ingresa la potencia (n): ";
    cin >> n;
    
    int resultado = potencia_recu(x, n);
    cout << "El resultado de " << x << "^" << n << " es: " << resultado << endl;
    return 0;
}
