#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    cout<<"Enter numbers"<<endl;
    cin>>num1>>num2;

    char c;
    cout<<"Enter the + for addition, - for substraction, * for multiplication, / for division"<<endl;
    cin>>c;
    switch (c)
    {
    case '+'/* constant-expression */:
        /* code */
        cout<<num1 + num2<<endl;

        break;
    case '-':
        cout<<num1 - num2<<endl;
        break;
    case '*':
        cout<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
    default:
        cout<<"Please choose correct option"<<endl;
        break;
    }


    return 0;
}