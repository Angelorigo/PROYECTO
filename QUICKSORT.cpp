//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

void intercambiar(int&a, int&b){
	int temp = a;
	a = b;
	b = temp;}

int particion(int A[], int ini, int fin){
	int pivote = A[fin];
	int i = ini-1;

	for (int j = ini; j<fin; j++){
		if (A[j] <= pivote){
			i++;
			intercambiar(A[i], A[j]);}}
	intercambiar(A[i+1], A[fin]);
	return i+1;}

void quicksort(int A[], int ini, int fin){
       if (ini<fin){
	       int q = particion(A, ini, fin);
	       quicksort(A, ini, q-1);
	       quicksort(A, q+1, fin);}}

int main(){
	int A[] = {5, 8, 10, 20, 50, 41, 9, 26, 0, 4};
	int n = sizeof(A)/sizeof(A[0]);

	cout << "Arreglo original:\n";
	for (int i = 0; i<n; i++)
		cout << A[i] << " ";
       	cout << endl;

	quicksort(A, 0, n-1);

	cout << "Arreglo ordenado con QUICKSORT:\n";
	for (int i = 0; i<n; i++)
		cout << A[i] << " ";
	cout <<  endl;
	return 0;}
