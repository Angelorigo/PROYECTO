//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

int BBNR(int A[], int n, int x){
	int pri = 0;
	int ult = n-1;
	int medio;
	bool encontrado = false; 

	while (!encontrado && pri <= ult){
		medio = (pri + ult)/2;

		if (A[medio] == x){
			encontrado = true;}
		else if (x > A[medio]){
			pri = medio+1;}
		else{
			ult = medio-1;}}
	if (!encontrado){
		return -1;}
	else{
		return medio;}} // REGRESA LA POSICIÓN DEL ELEM ENCONTRADO.

int main(){
	int A[] = {0, 4, 5, 8, 9, 10, 20, 26, 41, 50};
	int n = sizeof(A)/sizeof(A[0]);
	int x;

        cout << "Ingresa el número a buscar: ";
        cin >> x;

	int  encontrado = BBNR(A, n, x);

	if (encontrado == -1){
		cout << "El número " << x << " NO se encuentra en el arreglo\n";}
	else{
		cout << "El número " << x << " SÍ se encuentra en el arreglo, en la posición: "<< encontrado << endl;}
	return 0;}
