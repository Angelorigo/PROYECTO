//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

int Champ(int players[], int ini, int fin){
	if (ini == fin)	// 1 OE
		return players[ini];	// 1 OE
	int mitad = (ini+fin)/2;	// 3 OE
	int ChampI = Champ(players, ini, mitad);	// 2 OE
	int ChampD = Champ(players, mitad+1, fin);	// 2 OE
	if (ChampI>ChampD)	// 1 OE
		return ChampI;	// 1 OE
	else
		return ChampD;}	// 1 OE
int main(){
	int players[] = {5, 8, 10, 20, 50, 41, 9, 26};	// 1 OE
	int n = sizeof(players)/sizeof(players[0]);	// 3 OE
	int ChampOK = Champ(players, 0, n-1);	// 2 OE
	cout << "El campeón del torneo tiene habilidad: " << ChampOK << endl;	// 3 OE
	return 0;}	// 1 OE

