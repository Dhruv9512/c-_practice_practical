#include<bits/stdc++.h>
using namespace std;
int Decimal_To_octal(int n){
    int ans=0,temp,i=0;
    while (n!=0)
    {
        temp=(n%8);
        ans=(temp*pow(10,i))+ans;
        n/=8;
        i++;
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter a octal number to convert it into a binary:- ";
    cin>>n;

    int octal=Decimal_To_octal(n);
    cout<<octal;
    return 0;
}