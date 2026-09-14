#include <iostream>
using namespace std;

int buscar_recu(int A[], int n, int x) {
    if (n == 0) {
        return -1; 
    } else if (A[n - 1] == x) {
        return n - 1; 
    } else {
        return buscar_recu(A, n - 1, x); 
    }
}

int main() {
    int n, x;
    cout << "Ingresa la cantidad de elementos del arreglo: ";
    cin >> n;

    int A[n];
    cout << "Ingresa los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    cout << "Ingresa el valor a buscar: ";
    cin >> x;

    int pos = buscar_recu(A, n, x);

    if (pos != -1) {
        cout << "El valor " << x << " esta en el indice: " << pos << endl;
    } else {
        cout << "El valor " << x << " no existe en el arreglo." << endl;
    }

    return 0;
}