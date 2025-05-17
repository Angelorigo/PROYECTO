//================================
//  Álvarez Servín Ángel Rodrigo
//  ESFM IPN           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <climits>
using namespace std;

const int NumNodos = 4;

int costo[NumNodos][NumNodos] = {
	{0, 10, 15, 20},
	{10, 0, 35, 25},
	{15, 35, 0, 30},
	{20, 25, 30, 0}};

bool nodosasignados[NumNodos];
int trayectoria[NumNodos+1];

int buscamejornodo(int nodoactual){
	int mejorcosto = INT_MAX;
	int mejornodo = -1;
	for (int nodo = 0; nodo < NumNodos; nodo++){
		if (!nodosasignados[nodo] && costo[nodoactual][nodo] < mejorcosto){
			mejorcosto = costo[nodoactual][nodo];
			mejornodo = nodo;}}
	return mejornodo;}

int calculacosto(){
	int suma = 0;
	for (int i = 0; i<NumNodos; i++){
		suma = suma + costo[trayectoria[i]][trayectoria[i+1]];}
	return suma;}

void avv(){
	for (int i = 0; i<NumNodos; i++){
		nodosasignados[i] = false;}
	int nodoactual = 0;
	for (int i = 0; i<NumNodos; i++){
		nodosasignados[nodoactual] = true;
		trayectoria[i] = nodoactual;
		int nodosiguiente = buscamejornodo(nodoactual);
		nodoactual = nodosiguiente;}
	trayectoria[NumNodos] = 0;
	cout << "Trayectoria mímima: ";
	for (int i = 0; i <= NumNodos; i++){
		cout << char('A' + trayectoria[i]);
		if (i < NumNodos) 
			cout << " -> ";}
	cout << endl;
	int costototal = calculacosto();
	cout << "El costo total del viaje es de $" << costototal << endl;}

int main(){
	avv();
	return 0;}
