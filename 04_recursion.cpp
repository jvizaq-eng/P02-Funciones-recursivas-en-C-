#include <iostream>
using namespace std;

int maximo_recu(int A[], int n) {
    if (n == 1) {
        return A[0]; 
    } else {
        int m = maximo_recu(A, n - 1); 
        if (A[n - 1] > m) {
            return A[n - 1];
        } else {
            return m;
        }
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

    int max = maximo_recu(A, n);
    cout << "El elemento maximo del arreglo es: " << max << endl;

    return 0;
}