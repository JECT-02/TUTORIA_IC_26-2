#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Ingresa un valor para n: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n; j++){
            cout<< j + (i-1)*n<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}