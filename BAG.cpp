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
        return a.ratio > b.ratio;}

double mochilaFraccional(Objeto objetos[], int n, double capacidad){
        sort(objetos, objetos+n, comparar);
        double pesoActual = 0;
        double valorTotal = 0;

        for (int i = 0; i<n; i++){
                if (pesoActual + objetos[i].peso <= capacidad){
                    pesoActual += objetos[i].peso;
                    valorTotal += objetos[i].precio;
                    cout << "+ Metamos el objeto " << i+1 << " completo" <<  endl;}
                else{
                        double restante = capacidad - pesoActual;
                        valorTotal += objetos[i].ratio * restante;
                        cout << "+ Solo podemos meter " << restante << "Kg del objeto " << i+1 << endl;
                        break;}}
        return valorTotal;}

int main(){
        int n;
        double capacidad;


        cout << "+ Hola, cuantos objetos quieres meter?\n- ";
        cin >>  n;
        Objeto objetos[n];

        for (int i = 0; i<n; i++){
                cout << "\n+ En Kg, cuanto pesa el objeto " << i+1 << "?\n- ";
                cin >> objetos[i].peso;
                cout << "+ Que precio tiene el objeto " << i+1 << "?\n- $";
                cin >> objetos[i].precio;
                objetos[i].ratio = objetos[i].precio / objetos[i].peso;}
        cout << "\n+ Finalmente, cual es la capacidad de tu mochila?\n- ";
        cin >> capacidad;
	cout << "\n";

        double resultado = mochilaFraccional(objetos, n, capacidad);
        cout << "\n+ Lo que traes en la mochila vale $" << resultado << endl;
        return 0;}
