#include <iostream> 
using namespace std;

int potencia_recu(int n, int x);

int main() {
	int n, x;
	cout << "Ingresa el numero: "; 
	cin >> x;
	cout << "Ingresa la potencia: ";
	cin >> n;
	cout << "El resultado es: " << potencia_recu(n, x) << endl;
	return 0;
}

int potencia_recu(int n, int x) {
	if (n == 0) {
		return 1;
	} else {
		return x * potencia_recu(n - 1, x);
	}
}
