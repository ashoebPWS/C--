#include<iostream>
using namespace std;

int main(){
    int x[5]={1,2,3,4,5};
    cout<<sizeof(int)<<endl;//print the size of each integer
    int offset=(long)&(x[2])-(long)&(x[0]);    //check memory seperation (number of bytes between 2 arrays)
    cout<<offset<<endl;
    
    return 0;
}