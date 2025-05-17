//================================
//  Ángel Rodrigo Álvarez Servín
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

void cambio(int varo, int coins[], int n){
	int coincount[n] = {0};	// 1 OE

	for (int i = 0; i<n; i++){	// 4 OE
		while (varo >= coins[i]){	// 2 OE
			varo = varo - coins[i];	// 3 OE
			coincount[i]++;}}	// 3 OE
	if (varo >  0){	// 1 OE
		cout << "\n\n+ Hijoles, no le acompleto el cambio UnU" << endl;	// 2 OE
		cout << "\n- Bueno, seguire buscando..." << endl;}	// 2 OE
	else{
		cout << "\n\n+ Mire, aqui tiene su cambio..." << endl;	// 2 OE
	for (int i = 0; i<n; i++){	// 4 OE
		if (coincount[i] > 0){	// 2 OE
			cout << coincount[i] << " de a $" << coins[i] << endl;}}	// 6 OE
	cout << "\n-Gracias, buen dia" << endl;}}	// 2 OE

int main(){
	int coins[] = {10000, 1000, 50, 20, 10, 5, 2 };	// 1 OE
	int n = sizeof(coins)/sizeof(coins[0]);	// 3 OE
	int varo;

	cout << "+ Wenas, cuanto quiere que le cambiemos?? \n\n- $";	// 1 OE
	cin >> varo;	// 1 OE
	cout << "\n+ Mmm, $" << varo << "...";	// 3 OE
	cambio(varo, coins, n);	// 1 OE
	return 0;}	// 1 OE
