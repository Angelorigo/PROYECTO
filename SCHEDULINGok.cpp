//================================
//  Ángel Rodrigo Álvarez Servín
//  ESFM IPN           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <limits>
using namespace std;

const int n = 5;	// 1 OE
float costos[n][n] = {	// 1 OE
	{9, 2, 7, 8, 5},
	{6, 4, 3, 7, 2},
	{5, 8, 1, 8, 4},
	{7, 6, 9, 4, 3},
	{8, 9, 6, 5, 1}
};

int tareas[n];

bool yasignada(int tarea){
	for (int i = 0; i<n; ++i){	// 4 OE
		if (tareas[i] == tarea){	// 2 OE
			return true;}}	// 1 OE
	return false;}	// 1 OE

int asignatarea(int trabajador){
	float min = numeric_limits<float>::max();	// 3 OE
	int mejortarea = -1;	// 1 OE
	
	for (int tarea = 0; tarea<n; ++tarea){	// 4 OE
		if (!yasignada(tarea) && costos[trabajador][tarea] < min){	// 6 OE
			min = costos[trabajador][tarea];	// 3 OE
			mejortarea = tarea;}}	// 1 OE
	return mejortarea;}	// 1 OE

float calculacosto(){
	float suma = 0;	// 1 OE
	for (int trabajador = 0; trabajador < n; ++trabajador){	// 4 OE
		int tarea = tareas[trabajador];	// 2 OE
		suma = suma +  costos[trabajador][tarea];}	// 4 OE
	return suma;}	// 1 OE

float tareasvoraz(){
	for (int trabajador = 0; trabajador < n; ++trabajador){	// 4 OE
		tareas[trabajador] = asignatarea(trabajador);}	// 3 OE
	float costototal = calculacosto();	// 2 OE
	return costototal;}	// 1 OE

int main(){
	float costo = tareasvoraz();	// 2 OE
	cout << "Asignación de tareas:\n";	// 1 OE
	for (int i = 0; i<n; ++i){	// 4 OE
		cout << "Al trabajador " << i+1 << " le toca la tarea " << tareas[i]+1 << endl;}	// 8 OE
	cout << "El costo por hacer las tareas es de $" << costo << endl;	// 3 OE
	return 0;}	// 1 OE
