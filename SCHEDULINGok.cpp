//================================
//  Ángel Rodrigo Álvarez Servín
//  ESFM IPN           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <limits>
using namespace std;

const int n = 5;
float costos[n][n] = {
	{9, 2, 7, 8, 5},
	{6, 4, 3, 7, 2},
	{5, 8, 1, 8, 4},
	{7, 6, 9, 4, 3},
	{8, 9, 6, 5, 1}
};

int tareas[n];

bool yasignada(int tarea){
	for (int i = 0; i<n; ++i){
		if (tareas[i] == tarea){
			return true;}}
	return false;}

int asignatarea(int trabajador){
	float min = numeric_limits<float>::max();
	int mejortarea = -1;
	
	for (int tarea = 0; tarea<n; ++tarea){
		if (!yasignada(tarea) && costos[trabajador][tarea] < min){
			min = costos[trabajador][tarea];
			mejortarea = tarea;}}
	return mejortarea;}

float calculacosto(){
	float suma = 0;
	for (int trabajador = 0; trabajador < n; ++trabajador){
		int tarea = tareas[trabajador];
		suma = suma +  costos[trabajador][tarea];}
	return suma;}

float tareasvoraz(){
	for (int trabajador = 0; trabajador < n; ++trabajador){
		tareas[trabajador] = asignatarea(trabajador);}
	float costototal = calculacosto();
	return costototal;}

int main(){
	float costo = tareasvoraz();
	cout << "Asignación de tareas:\n";
	for (int i = 0; i<n; ++i){
		cout << "Al trabajador " << i+1 << " le toca la tarea " << tareas[i]+1 << endl;}
	cout << "El costo por hacer las tareas es de $" << costo << endl;
	return 0;}
