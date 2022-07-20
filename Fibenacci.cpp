#include<iostream>
using namespace std;

int fib(int num){
    int t1 = 0,t2 = 1,nxttrm;
    for(int i=1; i<=num; i++){
        cout<<t1<<endl;
        nxttrm = t1+t2;
        t1 = t2;
        t2 = nxttrm;

    }
    return 0;
}

int main(){
    int n, i=1;
    cin>>n;
    fib(n);

}