#include<iostream>
using namespace std;

void fibo(int n){
    int f1=0,f2=1,temp;

    for (int i = 1; i <=n; i++)
    {
        cout<<f1<<endl;
        temp=f1+f2;
        f1=f2;
        f2=temp;
        
    }
    
}
int main(){

    int n;
    cout<<"Enter length/ number of sequance :-";
    cin>>n;
    fibo(n);
    return 0;
}