/*
EJERCICIO 3 PC2 2024-2
suma de los cuadrados de las cifras de cualquier numero
*/
#include<iostream>
using namespace std;

int main(){
    
    int numero, resto, suma;
    suma = 0;
    
    cout<<"Ingrese su numero: ";
    cin>>numero;
    
    while(numero != 0){
        resto = numero % 10; //
        suma = suma + resto * resto; //
        numero = (numero - resto)/10;  // 
    }
    
    cout<<"La suma de cuadrados es: "<<suma<<endl;
    
    
    return 0;
}