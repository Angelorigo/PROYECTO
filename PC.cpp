//================================
//  Ángel Rodrigo Álvarez Servín
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

void cambio(int varo, int coins[], int n){
	int coincount[n] = {0};

	for (int i = 0; i<n; i++){
		while (varo >= coins[i]){
			varo = varo - coins[i];
			coincount[i]++;}}
	if (varo >  0){
		cout << "\n\n+ Hijoles, no le acompleto el cambio UnU" << endl;
		cout << "\n- Bueno, seguire buscando..." << endl;}
	else{
		cout << "\n\n+ Mire, aqui tiene su cambio..." << endl; 
	for (int i = 0; i<n; i++){
		if (coincount[i] > 0){
			cout << coincount[i] << " de a $" << coins[i] << endl;}}	cout << "\n-Gracias, buen dia" << endl;}}

int main(){
	int coins[] = {10000, 1000, 50, 20, 10, 5, 2 };
	int n = sizeof(coins)/sizeof(coins[0]);
	int varo;

	cout << "+ Wenas, cuanto quiere que le cambiemos?? \n\n- $";
	cin >> varo;
	cout << "\n+ Mmm, $" << varo << "...";
	cambio(varo, coins, n);
	return 0;}
