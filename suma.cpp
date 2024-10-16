#include <bits/stdc++.h>
using namespace std;

int main() {
	// este codigo hace una suma de a y b ahora con decimales
	double a,b;
	// leer a y b
	cin >> a >> b;
	// imprimir la suma redondeada a dos decimales 
	cout << setprecision(2) << fixed<< a+b;
	return 0;
}
