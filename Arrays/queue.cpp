#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<"Frist Pop: "<<q.front()<<endl;
    q.pop();
    cout<<"Second Pop: "<<q.front()<<endl;
    q.pop();
    
    
    
    return 0; 
}