#include<iostream>
using namespace std;

int fact(int num){
    int mul = 1;
    for(int i=2; i<=num; i++){
        mul *= i;
    }
    return mul;
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
        
    }
    
}