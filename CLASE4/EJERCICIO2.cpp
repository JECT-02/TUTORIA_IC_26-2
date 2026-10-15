#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Ingresa el valor de n: ";
    cin>>n;
    
    if(n<2){
        cout<<"ERROR, n debe ser almenos 2"<<endl;
    }
    
    else{
        
        for(int i=1; i<=n; i++){
            
            if(i == 1 || i==n){
                for(int j=1; j<=n; j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
            
            else{
                for(int j=1; j<=n; j++){
                    if(j == 1 || j==n){
                        cout<<"* ";
                    }
                    else{
                        cout<<"  ";
                    }
                }
                cout<<endl;
            }
            
        }
        
    }
    
    return 0;
}