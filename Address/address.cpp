#include<iostream>
using namespace std;

//show that stack memory goes from high to low 
void foo(){
    int x =42;
    cout<< "Value of x= "<<x<<endl;
    cout<< "Address of x= "<<&x<<endl;
}

int main(){
    int num=7;

    cout<< "Value= "<<num<<endl;
    cout<< "Address= "<<&num<<endl;

    foo();
    return 0;
}
