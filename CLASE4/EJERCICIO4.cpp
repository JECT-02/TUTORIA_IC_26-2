#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Ingrese un valor para n: ";
    cin>>n;
    
    if(n % 2 == 0){
        n = n+1;
    }
    
    // triangulo de la flecha
    int centro = (n+1)/2;
    
    for(int i=1; i<=n; i = i+2){
        for(int j = 1; j<=n; j++){
            if(j>centro-(i+1)/2 && j<centro+(i+1)/2){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}