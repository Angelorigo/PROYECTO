//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

bool BBR(int A[], int pri, int ult, int x){
	if (pri>ult){
		return false;}
	if (pri==ult){
		return A[pri] == x;}
	int mitad = (pri+ult)/2;

	if (x==A[mitad]){
		return true;}
	else if (x<A[mitad]){
		return BBR(A, pri, mitad-1, x);}
	else{
		return BBR(A, mitad+1, ult, x);}}

int main(){
	int A[] = {0, 4, 5, 8, 9, 10, 20, 26, 41, 50};
	int n = sizeof(A)/sizeof(A[0]);
	int x;
	cout << "- Qué número quieres buscar? \n+ ";
	cin >> x;

	bool encontrado = BBR(A, 0, n-1, x);
	if (encontrado){
		cout << "El número " << x << " está en el arreglo\n ";}
	else{
		cout << "El número " << x << " NO está en el arreglo\n ";}
	return 0;}
