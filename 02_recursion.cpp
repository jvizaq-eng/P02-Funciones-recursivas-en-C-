#include <iostream>
using namespace std;

int suma_recu(int A[], int n) {
    if (n == 1) {
        return A[0];
    } else {
        return A[n - 1] + suma_recu(A, n - 1); 
    }
}

int main() {
    int n;
    cout << "Ingresa la cantidad de elementos del arreglo: ";
    cin >> n;

    int A[n];
    cout << "Ingresa los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    int resultado = suma_recu(A, n);
    cout << "La suma es: " << resultado << endl;

    return 0;
}