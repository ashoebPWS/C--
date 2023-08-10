#include<iostream>
using namespace std;

int main(){
    int i=2, j=4,k=8;
    int *p=&i, *q=&j, *r=&k;


    k=i; //value of k change to value of i, 8=2

    cout<<i<<j<<k<<*p<<*q<<*r<<endl;

    p=q; //pointer p now points as the same value as point q which is 4

    *q=*r; //value pointed by q  is changed to the vlaue pointd by r which was 8 now is 2


    return 0;

}