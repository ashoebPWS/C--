#include<iostream>
#include<string>
using namespace std;
                                        
int main(){
    float x,y;
    char op;
    cout<<"Enter first number: ";
    cin>>x;

    cout<<"Enter Operator: ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>y;
    

    switch(op){
        case '+':
        cout<<x<<"+"<<y<<"= "<<x+y<<endl;
        break;

        case '-':
        cout<<x<<"-"<<y<<"= "<<x-y<<endl;
        break;

        case '*':
        cout<<x<<"*"<<y<<"= "<<x*y<<endl;
        break;

        case '/':
        cout<<x<<"/"<<y<<"= "<<x/y<<endl;
        break;

        default:
        cout<<"Error incorrect operator";
        break;


    }

    return 0;
}