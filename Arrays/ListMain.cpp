#include"List.h"
#include<iostream>
using namespace std;

int main(){
    List<int> list;
    
    const int item_a=3;
    const int item_b=30;

    cout<<"Inserting element 3 at the front..."<<endl;
    list.insertAtFront(item_a);

    cout<<"list[0]= "<<list[0]<<endl;

     cout<<"Inserting element 30 at the front..."<<endl;
    list.insertAtFront(item_b);

    cout<<"list[0]= "<<list[0]<<endl;
    return 0;


}