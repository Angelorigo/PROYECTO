//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

int BBNR(int A[], int n, int x){
	int pri = 0;	// 1 OE
	int ult = n-1;	// 2 OE
	int medio;
	bool encontrado = false;	// 1 OE

	while (!encontrado && pri <= ult){	// 4 OE
		medio = (pri + ult)/2;	// 3 OE

		if (A[medio] == x){	// 2 OE
			encontrado = true;}	// 1 OE
		else if (x > A[medio]){	// 2 OE
			pri = medio+1;}	// 2 OE
		else{
			ult = medio-1;}}	// 2 OE
	if (!encontrado){	// 1 OE
		return -1;}	// 1 OE
	else{
		return medio;}} // 1 OE

int main(){
	int A[] = {0, 4, 5, 8, 9, 10, 20, 26, 41, 50};	// 1 OE
	int n = sizeof(A)/sizeof(A[0]);	// 3 OE
	int x;

        cout << "Ingresa el número a buscar: ";	// 1 OE
        cin >> x;	// 1 OE

	int  encontrado = BBNR(A, n, x);	// 2 OE

	if (encontrado == -1){ 	// 1 OE
		cout << "El número " << x << " NO se encuentra en el arreglo\n";}	// 3 OE
	else{
		cout << "El número " << x << " SÍ se encuentra en el arreglo, en la posición: "<< encontrado << endl;}	// 5 OE
	return 0;}	// 1 OE
