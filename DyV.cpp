//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

int Champ(int players[], int ini, int fin){
	if (ini == fin)
		return players[ini];
	int mitad = (ini+fin)/2;
	int ChampI = Champ(players, ini, mitad);
	int ChampD = Champ(players, mitad+1, fin);
	if (ChampI>ChampD)
		return ChampI;
	else
		return ChampD;}
int main(){
	int players[] = {5, 8, 10, 20, 50, 41, 9, 26};
	int n = sizeof(players)/sizeof(players[0]);
	int ChampOK = Champ(players, 0, n-1);
	cout << "El campeón del torneo tiene habilidad: " << ChampOK << endl;
	return 0;}

