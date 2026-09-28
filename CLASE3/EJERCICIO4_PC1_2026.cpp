/*
EJERCICIO 4 PC1 2026-2
tipo (1,2,3)
nivel (1,2,3)

tipo no es 1, 2 o 3 -> MATERIAL_INVALIDO
nivel no es 1, 2 o 3 -> NIVEL_INVALIDO

puntos < 30 -> Clase BAJA
30 <=puntos <60 Clase MEDIA
60 <= puntos Clase ALTA

*/
#include<iostream>
using namespace std;

int main(){
    int tipo, nivel, puntos;
    puntos = -1;
    
    cout<<"Ingrese el tipo (1,2 o 3): ";
    cin>>tipo;
    
    cout<<"Ingrese el nivel (1, 2 o 3): ";
    cin>>nivel;
    
    switch (tipo){
        case 1: 
            switch (nivel){
                case 1: puntos = 10;
                        break;
                case 2: puntos = 25;
                        break;
                case 3: puntos = 40;
                        break;
                default:
                    cout<<"NIVEL INVALIDO"<<endl;
            }
            break;
        case 2:
            switch (nivel){
                case 1: puntos = 15;
                        break;
                case 2: puntos = 35;
                        break;
                case 3: puntos = 60;
                        break;
                default:
                    cout<<"NIVEL INVALIDO"<<endl;
            }
            break;
        
        case 3:
            switch (nivel){
                case 1: puntos = 20;
                        break;
                case 2: puntos = 50;
                        break;
                case 3: puntos = 85;
                        break;
                default:
                    cout<<"NIVEL INVALIDO"<<endl;
            }
            break;
        default:
            cout<<"MATERIAL INVALIDO"<<endl;
    }
    
    
    if(puntos == -1){
        cout<<"ERROR EN TUS DATOS, NO SE PUDO PROCESAR"<<endl;
    }
    else if(puntos < 30){
        cout<<"Puntos: "<<puntos<<"; clase: BAJA"<<endl;
    }
    else if(puntos < 60){
        cout<<"Puntos: "<<puntos<<"; clase: MEDIA"<<endl;
    }
    else{
        cout<<"Puntos: "<<puntos<<"; clase: ALTA"<<endl;
    }
    
    
    
    return 0;
}