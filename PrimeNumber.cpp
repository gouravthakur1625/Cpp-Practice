#include<iostream>
using namespace std ;

int main(){
    int n,count = 0,i ;
    cin>>n;
    for(i = 2; i<n; i++){
        if(n%i == 0){
            cout<<"Not a Prime Number";
            break;
            // count += 1;
        }
 
    }
    if(i == n){
        cout<<"Prime Number";
    }
    return 0;
}