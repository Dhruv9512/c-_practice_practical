#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    cout<<"Enter value of a :- ";
    cin>>a;
    cout<<"Enter value of b :- ";
    cin>>b;
    cout<<"Enter value of c :- ";
    cin>>c;
   
    (a>b&&a>c)? cout<<"A is largest":(b>a&&b>c)? cout<<"B is largest":(c>a&&c>b)?cout<<"C is largest":cout<<"All are equal";
   
    return 0;
}