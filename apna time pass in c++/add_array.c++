#include<bits\stdc++.h>
using namespace std;
int main(){
    int a[3],b[3],c[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter " <<i+1<<" value of 'a' array:- ";
       cin>>a[i];
       cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter " <<i+1<<" value of 'b' array:- ";
       cin>>b[i];
       cin.ignore();
    }
    for (int i = 0; i < 3; i++)
    {
        c[i]=b[i]+a[i];
    }
    

    // print 

    for (int i = 0; i < 3; i++)
    {
       
       cout<<"The "<<i+1 <<" array value is "<<c[i]<<endl;
     
    }
    return 0;
}