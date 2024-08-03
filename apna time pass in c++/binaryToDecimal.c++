#include<iostream>
#include<math.h>
using namespace std;
int bineryToDecimal(int n){
    int number=0,i=0;
     while (n!=0)
     { 
        number=number+((n%10)*(pow(2,i)));
        i++;
        n/=10;
     }
     return number;
}
int main (){
    int n;
    cout<<"Enter binary number:- ";
    cin>>n;

    int Decimal_number=bineryToDecimal(n);
    cout<<Decimal_number;
    return 0;
}