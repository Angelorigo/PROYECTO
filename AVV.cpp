//================================
//  Álvarez Servín Ángel Rodrigo
//  ESFM IPN           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <climits>
using namespace std;

const int NumNodos = 4;	// 1 OE

int costo[NumNodos][NumNodos] = {	// 3 OE
	{0, 10, 15, 20},
	{10, 0, 35, 25},
	{15, 35, 0, 30},
	{20, 25, 30, 0}};

bool nodosasignados[NumNodos];	
int trayectoria[NumNodos+1];

int buscamejornodo(int nodoactual){
	int mejorcosto = INT_MAX;	// 2 OE
	int mejornodo = -1;	// 1 OE
	for (int nodo = 0; nodo < NumNodos; nodo++){	// 4 OE
		if (!nodosasignados[nodo] && costo[nodoactual][nodo] < mejorcosto){	// 6 OE
			mejorcosto = costo[nodoactual][nodo];	// 3 OE
			mejornodo = nodo;}}	// 1 OE
	return mejornodo;}	// 1 OE

int calculacosto(){
	int suma = 0;	// 1 OE
	for (int i = 0; i<NumNodos; i++){	// 4 OE
		suma = suma + costo[trayectoria[i]][trayectoria[i+1]];}	// 7 OE
	return suma;}	// 1 OE

void avv(){
	for (int i = 0; i<NumNodos; i++){ // 4 OE
		nodosasignados[i] = false;}	// 3 OE
	int nodoactual = 0;	// 1 OE
	for (int i = 0; i<NumNodos; i++){	// 4 OE
		nodosasignados[nodoactual] = true;	// 3 OE
		trayectoria[i] = nodoactual;	// 3 OE
		int nodosiguiente = buscamejornodo(nodoactual);	// 2 OE
		nodoactual = nodosiguiente;}	// 1 OE
	trayectoria[NumNodos] = 0;	// 2 OE
	cout << "Trayectoria mímima: ";	// 1 OE
	for (int i = 0; i <= NumNodos; i++){	// 4 OE
		cout << char('A' + trayectoria[i]);	// 3 OE
		if (i < NumNodos)	// 1 OE
			cout << " -> ";}	// 1 OE
	cout << endl;	// 1 OE
	int costototal = calculacosto();	// 2 OE
	cout << "El costo total del viaje es de $" << costototal << endl;}	// 3 OE

int main(){
	avv();	// 1 OE
	return 0;}	// 1 OE
