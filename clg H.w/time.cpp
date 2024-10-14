#include<iostream>
#include<ctime>

int main(){
    std::time_t currentTime = std::time(nullptr);
    std::cout<<currentTime;
    std::cout<<std::localtime(&currentTime);

    return 0;
}