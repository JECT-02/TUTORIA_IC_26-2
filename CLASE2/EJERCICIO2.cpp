// ESTRUCTURA BASICA DE C++

//LIBRERIAS -> iostream

/*
Ejercicio 3: Decisión de reabastecimiento de inventario  
El stock inicial de un producto es 100 unidades. 
El programa debe pedir:  
 La cantidad actual en stock (entero)  
 La cantidad que se quiere vender (entero) 
Usa if anidadas para:  
 Si la cantidad a vender es negativa o mayor que el stock actual → "Cantidad 
inválida"  
 Si después de la venta el stock queda menor a 20 → "Alerta: Stock bajo. 
Reabastecer inmediatamente."  
 En caso contrario → "Venta realizada. Stock restante: X" 
*/
#include <iostream>
using namespace std;

int main(){
    int stock=100;
    int vender;
    
    cout<<"Ingrese el stock del producto: ";
    cin>>stock;
    
    cout<<"Ingrese la cantidad a vender: ";
    cin>>vender;
    
    if(vender < 0 || stock < vender){
        cout<<"Cantidad invalida"<<endl;
    }
    else{
        stock = stock - vender;
        if(stock < 20){
            cout<<"ALERTA STOCK BAJO, QUEDAN: "<<stock<<endl;
        }
        else{
            cout<<"VENTA REALIZADA, EL NUEVO STOCK RESTANTE ES: "<<stock<<endl;
        }
    }
    return 0;
}



