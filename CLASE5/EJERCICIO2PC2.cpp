#include<iostream>
using namespace std;

int main(){
    int n, contador = 0;

    do{
        cout<<"Ingresa un numero: ";
        cin>>n;
        if(n>0 && n % 2 == 0){
            contador = contador + 1;
        }
    }while(n>0);
    
    cout<<"Cantidad de numeros pares: "<<contador<<endl;
    return 0;
}
// te pidan valores hasta que ingrese un negativo