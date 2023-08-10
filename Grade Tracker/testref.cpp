#include<string>
#include<iostream>
std::string modifyString(std::string str){
    return str="Modified";
}

std::string modifyStringref(std::string& str){
    return str="Modified";
}
int main(){
    std::string myString="Original";
    std::string myStringref="Original";
    modifyStringref(myStringref);
    std::string x= modifyString(myString);
    std::cout<<myString<<std::endl;
    std::cout<<&myString<<std::endl;
    std::cout<<x<<std::endl;

    std::cout<<myStringref<<std::endl;
    std::cout<<&myStringref<<std::endl;



}