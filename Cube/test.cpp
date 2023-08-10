#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> x;
    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    
    for(int i : x){
        cout<<"a7a"<<endl;
    }

    std::vector<int> v = {1,2,3,4};
    for (int i=0; i < v.size(); i++) {
    std::cout << v[i] << std::endl;
    }
    
    return 0;
}