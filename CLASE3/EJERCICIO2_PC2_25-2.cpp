/*
EJERCICIO 2 PC2 2025-1

ADIVINAR NUMERO DEL 1-100 DANDO PISTAS
- ADIVINA
- SE LE ACABO INTENTOS
- SE RINDE
*/
#include<iostream>
#include<cstdlib> //para generar numeros random
#include<ctime>
using namespace std;

int main(){
    
    int numero, intentos, target;
    intentos = 6;
    bool flag = true;
    
    srand(time(0));
    target = rand() % 100 + 1;
    
    cout<<"          .:Juego de la adivinanza:."<<endl;
    cout<<"Reglas:"<<endl;
    cout<<"- Intenta adivinar un numero del 1 al 100"<<endl;
    cout<<"- Solo tienes 6 intentos"<<endl;
    cout<<"- Ingresa 0 para rendirte"<<endl;
    
    do{
        cout<<"Ingresa tu numero: ";
        cin>>numero;
        
        if(numero == 0){
            cout<<"TE RENDISTE, EL NUMERO ERA: "<<target<<endl;
            flag = false;
            break;
        }
        else if(intentos == 0){
            cout<<"SE TE ACABARON LOS INTENTOS, EL NUMERO ERA: "<<target<<endl;
            flag = false;
            break;
        }
        else if(numero == target){
            cout<<"FELICITACIONES, ADIVINASTE"<<endl;
            flag = false;
            break;
        }
        else{
            if(numero < target){
                cout<<"DEMASIADO BAJO"<<endl;
                intentos = intentos - 1;
            }
            
            if(numero > target){
                cout<<"DEMASIADO ALTO"<<endl;
                intentos = intentos - 1;
            }
        }
        
        
    }while(flag);
    
    
    
    return 0;
}