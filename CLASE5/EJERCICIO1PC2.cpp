#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // objetivo es hallar k
    int n, k;

    do{
        cout<<"Ingresa un numero: ";
        cin>>n;
    }while(n<3);

    k = sqrt(2*n);
    if(k*(k+1)/2 > n){
        k--;
    }

    int medio = k;
    
    for(int i=1; i<=k; i++){
        int contador = 1;
        for(int j=1; j<=2*k; j++){
             if(j > medio - i && j < medio + i){
                 if(contador % 2 == 1){
                     cout<<"*";
                     contador++;
                 }else{
                      cout<<" ";
                     contador++;
                 }
             }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"Te sobraron: "<<n-k*(k+1)/2<<" asteriscos"<<endl;
    return 0;
}