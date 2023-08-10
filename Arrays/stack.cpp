
#include<iostream>
#include<stack>
using namespace std;


int main(){
    stack<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<"Frist Pop: "<<q.top()<<endl;
    q.pop();
    cout<<"Second Pop: "<<q.top()<<endl;
    q.pop();
    
    
    
    return 0; 
}