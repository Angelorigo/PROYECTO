//================================
//  Álvarez Servín Ángel Rodrigo
//  IPN ESFM           MAYO 2025
//     ANÁLISIS DE ALGORITMOS
//================================

#include <iostream>
#include <algorithm>
using namespace std;

struct Objeto {
        double peso;
        double precio;
        double ratio;};

bool comparar(Objeto a, Objeto b){
        return a.ratio > b.ratio;}	// 4 OE

double mochilaFraccional(Objeto objetos[], int n, double capacidad){
        sort(objetos, objetos+n, comparar);	// 1 OE
        double pesoActual = 0;	// 1 OE
        double valorTotal = 0;	// 1 OE

        for (int i = 0; i<n; i++){	// 4 OE
                if (pesoActual + objetos[i].peso <= capacidad){	// 4 OE
                    pesoActual = pesoActual +  objetos[i].peso;	// 4 OE
                    valorTotal = valorTotal + objetos[i].precio;	// 4 OE
                    cout << "+ Metamos el objeto " << i+1 << " completo" <<  endl;}	// 5 OE
                else{
                        double restante = capacidad - pesoActual;	// 2 OE
                        valorTotal = valorTotal + objetos[i].ratio * restante;	// 5 OE 
                        cout << "+ Solo podemos meter " << restante << "Kg del objeto " << i+1 << endl;	// 6 OE
                        break;}}
        return valorTotal;}	// 1 OE

int main(){
        int n;
        double capacidad;

        cout << "+ Hola, cuantos objetos quieres meter?\n- ";	// 1 OE
        cin >>  n;	// 1 OE
        Objeto objetos[n];	

        for (int i = 0; i<n; i++){	// 4 OE
                cout << "\n+ En Kg, cuanto pesa el objeto " << i+1 << "?\n- ";	// 4 OE
                cin >> objetos[i].peso;	// 3 OE
                cout << "+ Que precio tiene el objeto " << i+1 << "?\n- $";	// 4 OE
                cin >> objetos[i].precio;	// 3 OE
                objetos[i].ratio = objetos[i].precio / objetos[i].peso;}	// 8 OE
        cout << "\n+ Finalmente, cual es la capacidad de tu mochila?\n- ";	// 1 OE
        cin >> capacidad;	// 1 OE
	cout << "\n";	// 1 OE

        double resultado = mochilaFraccional(objetos, n, capacidad);	// 2 OE
        cout << "\n+ Lo que traes en la mochila vale $" << resultado << endl;	// 3 OE
        return 0;}	// 1 OE
