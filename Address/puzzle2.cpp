#include<iostream>
using namespace std;


int main(){
    int *x= new int; //create new pointer in the stack which points to a new int in the heap
    int &y=*x; // alias the memory in the heap and give it the name y (refrence variable )
    y=4;

    cout<<&x<<endl;//address of x on the stack
    cout<<x<<endl; //content of x which is the heap memory location
    cout<<*x<<endl;// derefrence x which is 4

    cout<<&y<<endl;//memoery on the heap
    cout<<y<<endl;//content of y which is 4

    int *z;//create new pointer z
    int size =3;
    z=new int[size]; //create array in heap of size 3
    for(int i=0;i<size;i++){
        z[i]=i+3;
    }
    delete[] z;

    return 0;
}