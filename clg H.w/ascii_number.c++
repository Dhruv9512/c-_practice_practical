#include<iostream>
int main(){
    char c;
    std::cout<<"Enter a ascii value:- "<<std::endl;
    std::cin>>c;

    std::cout<<"The ascii value of '"<<c<<"' is:- "<< int(c);
    return 0;
}