//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <vector>
using namespace std;

void MEZCLA(int A[], int n1, int B[], int n2, int C[]) {  
	int i=0, j=0, k=0;
	while (i<n1 && j<n2){
		if (A[i] <= B[j]){
			C[k] = A[i];
			i++;}
		else {
			C[k] = B[j];
			j++;}
		k++;}
	while (i<n1){
		C[k] = A[i];
		i++;
		k++;}
	while (j<n2){
		C[k] = B[j];
		j++;
		k++;}}

void MERGESORT(int A[], int ini, int fin){
	if (ini<fin){
		int mitad = (ini + fin)/2;
		MERGESORT(A, ini, mitad);
		MERGESORT(A, mitad+1, fin);
		int n1 = mitad-ini+1;
		int n2 = fin-mitad;
		int* izq = new int [n1];
		int* der = new int [n2];
		int* C = new int [n1+n2];

		for (int i = 0; i<n1; i++)
			izq[i] = A[ini+i];
		for (int i = 0; i<n2; i++)
			der[i] = A[mitad+1+i];
		MEZCLA(izq, n1, der, n2, C);
		for (int i = 0; i<n1+n2; i++)
			A[ini+i] = C[i];
		delete[] izq;
		delete[] der;
		delete[] C;}}

void ImpArray(int A[], int n){
	for (int i = 0; i<n; i++)
		cout << A[i] << " ";
		cout << endl;}

int main(){
	int A[] = {5, 8, 10, 20, 50, 41, 9, 26, 0, 4};
	int n = sizeof(A)/sizeof(A[0]);
	cout << "Arreglo original: \n";
	ImpArray(A, n);
	MERGESORT(A, 0, n-1);
	cout << "Arreglo ordenado: \n";
	ImpArray(A, n);
	return 0;}
