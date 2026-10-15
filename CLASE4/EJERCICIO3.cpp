#include<iostream>
#include<cmath>
using namespace std;
int main(){
    
    int n;
    cout<<"Ingrese un valor para n: ";
    cin>>n;
    
    if(n<=0){
        cout<<"ERROR, INGRESE UN N POSITIVO"<<endl;
    }
    else{
        cout<<"1 no es primo"<<endl;
        for(int i=2; i<= n; i++){
            int raiz = sqrt(i);
            int cont = 0;
            
            for(int j=2; j<=raiz; j++){
                if(i % j == 0){
                    cout<<i<<" no es primo (divisible por "<<j<<")"<<endl;
                    cont = cont + 1;
                    break;
                }
            }
            if(cont == 0){
                cout<<i<<" es primo"<<endl;
            }
        }
    }
    
    return 0; 
}