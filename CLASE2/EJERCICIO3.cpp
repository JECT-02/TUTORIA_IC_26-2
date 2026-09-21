// ESTRUCTURA BASICA DE C++

//LIBRERIAS -> iostream

/*
12 Realizar un programa que lea cuatro coordenadas de un plano (푥, 푦) en sentido horario, luego
el programa debe verificar si estas corresponden a un cuadrado.
        
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1, x2, x3, x4, y1, y2, y3, y4;
    float d1, d2, d3, d4;
    
    cout<<"Ingrese las coordenadas del punto 1:"<<endl;
    cout<<"Ingrese x: ";
    cin>>x1;
    cout<<"Ingrese y: ";
    cin>>y1;
    
    cout<<"Ingrese las coordenadas del punto 2:"<<endl;
    cout<<"Ingrese x: ";
    cin>>x2;
    cout<<"Ingrese y: ";
    cin>>y2;
    
    cout<<"Ingrese las coordenadas del punto 3:"<<endl;
    cout<<"Ingrese x: ";
    cin>>x3;
    cout<<"Ingrese y: ";
    cin>>y3;
    
    cout<<"Ingrese las coordenadas del punto 4:"<<endl;
    cout<<"Ingrese x: ";
    cin>>x4;
    cout<<"Ingrese y: ";
    cin>>y4;
    
    d1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    d2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
    d3 = sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4));
    d4 = sqrt((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1));
    
    if(d1 == d2 && d2 == d3 && d3 == d4){
        cout<<"Sus puntos forman un cuadrado"<<endl;
    }
    else{
        cout<<"Sus puntos no forman un cuadrado"<<endl;
    }
}




