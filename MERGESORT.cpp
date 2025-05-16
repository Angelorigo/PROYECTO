//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <vector>
using namespace std;

void MEZCLA(int A[], int n1, int B[], int n2, int C[]) {  
	int i=0, j=0, k=0;	// 3 OE
	while (i<n1 && j<n2){	// 3 OE
		if (A[i] <= B[j]){	// 3 OE
			C[k] = A[i];	// 3 OE
			i++;}	// 2 OE
		else {
			C[k] = B[j];	// 3 OE
			j++;}	// 2 OE
		k++;}	// 2 OE
	while (i<n1){	// 1 OE
		C[k] = A[i];	// 3 OE
		i++;	// 2 OE
		k++;}	// 2 OE
	while (j<n2){	// 1 OE
		C[k] = B[j];	// 3 OE
		j++;	// 2 OE
		k++;}}	// 2 OE

void MERGESORT(int A[], int ini, int fin){
	if (ini<fin){	// 1 OE
		int mitad = (ini + fin)/2;	// 3 OE
		MERGESORT(A, ini, mitad);	// 1 OE
		MERGESORT(A, mitad+1, fin);	// 1 OE
		int n1 = mitad-ini+1;	// 3 OE
		int n2 = fin-mitad;	// 2 OE
		int* izq = new int [n1];	// 1 OE
		int* der = new int [n2];	// 1 OE
		int* C = new int [n1+n2];	// 2 OE

		for (int i = 0; i<n1; i++)	// 4 OE
			izq[i] = A[ini+i];	// 3 OE
		for (int i = 0; i<n2; i++)	// 4 OE
			der[i] = A[mitad+1+i];	// 3 OE
		MEZCLA(izq, n1, der, n2, C);	// 1 OE
		for (int i = 0; i<n1+n2; i++)	// 4 OE
			A[ini+i] = C[i];	// 3 OE
		delete[] izq;	// 1 OE
		delete[] der;	// 1 OE
		delete[] C;}}	// 1 OE

void ImpArray(int A[], int n){
	for (int i = 0; i<n; i++)	// 4 OE
		cout << A[i] << " ";	// 3 OE
		cout << endl;}	// 1 OE

int main(){
	int A[] = {5, 8, 10, 20, 50, 41, 9, 26, 0, 4};	// 1 OE
	int n = sizeof(A)/sizeof(A[0]);	// 2 OE
	cout << "Arreglo original: \n";	// 1 OE
	ImpArray(A, n);	// 1 OE
	MERGESORT(A, 0, n-1);	// 1 OE
	cout << "Arreglo ordenado con MERGESORT: \n";	// 1 OE
	ImpArray(A, n);	// 1 OE
	return 0;}	// 1 OE
