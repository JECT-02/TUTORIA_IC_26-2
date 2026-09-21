// ESTRUCTURA BASICA DE C++

//LIBRERIAS -> iostream

/*
Escribe un programa que pida una temperatura en grados Celsius (número decimal). 
Usa una cadena de if-else if para mostrar:  
 Si es menor a 0 °C → "Temperatura muy baja - Riesgo de congelación"  
 Si está entre 0 y 25 °C → "Temperatura normal"  
 Si está entre 25 y 40 °C → "Temperatura alta - Verificar equipo"  
 Si es mayor a 40 °C → "¡Peligro! Temperatura crítica" 
*/
#include <iostream>
using namespace std;

int main(){
    
    float Celsius;
    
    cout<<"Ingresa tu temperatura en celusius: ";
    cin>>Celsius;
    
    if(Celsius < 0){
        cout<<"Temperatura muy baja"<<endl;
    }
    else if(Celsius < 25){
        cout<<"Temperatura normal"<<endl;
    }
    else if(Celsius < 40){
        cout<<"Temperatura alta"<<endl;
    }
    else{
        cout<<"Peligro"<<endl;
    }
    
    return 0;
}



