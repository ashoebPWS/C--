#include<iostream>
using namespace std;

int main(){
    int *numPtr= new int;

    cout<<"*numPtr= "<< *numPtr<<endl; //defrence numptr so number is unassigned
    cout<<"numPtr= "<< numPtr<<endl; //conents of numptr which is the address of the heap memory 
    cout<<"&numPtr= "<< &numPtr<<endl; //address of the numptr which is a number on the stack memory


    *numPtr=42;
    cout<<"*numptr assigned 42 "<<endl;

 
    cout<<"*numPtr= "<< *numPtr<<endl; //42 will be displayed
    cout<<"numPtr= "<< numPtr<<endl; //address on heap
    cout<<"&numPtr= "<< &numPtr<<endl; //address on stack


    return 0;
}