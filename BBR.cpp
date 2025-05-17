//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
using namespace std;

bool BBR(int A[], int pri, int ult, int x){
	if (pri>ult){	// 1 OE
		return false;}	// 1 OE
	if (pri==ult){	// 1 OE
		return A[pri] == x;}	// 3 OE
	int mitad = (pri+ult)/2;	// 3 OE

	if (x==A[mitad]){	// 2 OE
		return true;}	// 1 OE
	else if (x<A[mitad]){	// 2 OE
		return BBR(A, pri, mitad-1, x);}	// 2 OE
	else{
		return BBR(A, mitad+1, ult, x);}}	// 2 OE

int main(){
	int A[] = {0, 4, 5, 8, 9, 10, 20, 26, 41, 50};	// 1 OE
	int n = sizeof(A)/sizeof(A[0]);	// 3 OE
	int x;
	cout << "- Qué número quieres buscar? \n+ ";	// 1 OE
	cin >> x;	// 1 OE

	bool encontrado = BBR(A, 0, n-1, x); // 2 OE

	if (encontrado){	// 1 OE
		cout << "El número " << x << " está en el arreglo\n ";}	// 3 OE
	else{	
		cout << "El número " << x << " NO está en el arreglo\n";}	// 3 OE
return 0;}	// 1 OE
