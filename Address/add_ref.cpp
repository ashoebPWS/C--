#include<iostream>
using namespace std;

int main(){
    int num=7;
    cout<<"Value= "<<num<<endl;  //Output value of num
    cout<<"Value= "<<&num<<endl; //Output address of num

    int *p=&num; //Create Pointer with the address of num
    cout<<"P= "<<p<<endl; //p should have the address of num
    cout<<"&P= "<<&p<<endl; // Memory address of p which should be less than num 
    cout<<"*P= "<<*p<<endl; //derefrence p to check the contents of the address=7 in this case

    *p=42; // chnage derefrence value
    cout<<"Code changed value of num to 42"<<endl;
    cout<<"Num=  "<<num<<endl; 
    
    return 0;
}