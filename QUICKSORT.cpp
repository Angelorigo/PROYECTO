//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

void intercambiar(int&a, int&b){
	int temp = a;	// 2 OE
	a = b;	// 1 OE
	b = temp;}	// 1 OE

int particion(int A[], int ini, int fin){
	int pivote = A[fin];	// 2 OE
	int i = ini-1;	// 2 OE

	for (int j = ini; j<fin; j++){	// 4 OE
		if (A[j] <= pivote){	// 2 OE
			i++;	// 2 OE
			intercambiar(A[i], A[j]);}}	// 1 OE
	intercambiar(A[i+1], A[fin]);	// 1 OE
	return i+1;}	// 2 OE

void quicksort(int A[], int ini, int fin){
       if (ini<fin){	// 1 OE
	       int q = particion(A, ini, fin);	// 2 OE
	       quicksort(A, ini, q-1);	// 1 OE
	       quicksort(A, q+1, fin);}}	// 1 OE

int main(){
	int A[] = {5, 8, 10, 20, 50, 41, 9, 26, 0, 4};	// 1 OE
	int n = sizeof(A)/sizeof(A[0]);	// 3 OE

	cout << "Arreglo original:\n";	// 1 OE
	for (int i = 0; i<n; i++)	// 4 OE
		cout << A[i] << " ";	// 3 OE
       	cout << endl;	// 1 OE

	quicksort(A, 0, n-1);	// 1 OE

	cout << "Arreglo ordenado con QUICKSORT:\n";	// 1 OE
	for (int i = 0; i<n; i++)	// 4 OE
		cout << A[i] << " ";	// 3 OE
	cout <<  endl;	// 1 OE
	return 0;}	// 1 OE
