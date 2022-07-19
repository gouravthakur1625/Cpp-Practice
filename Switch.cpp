#include<iostream>
using namespace std;

int main(){
    char c;
    cin>>c;
    switch (c)
    {
    case 'a':
        cout<<"English"<<endl;/* code */
        break;
    case 'b':
        cout<<"Bengali";
        break;
    
    default:
        cout<<"Bhaad me ja";
        break;
    }
}