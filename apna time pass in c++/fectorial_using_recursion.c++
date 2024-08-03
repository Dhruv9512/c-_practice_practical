#include<bits\stdc++.h>
using namespace std;
int facto(int n){
    int ans;

    if (n==1)
    {
       return 1;
    }
    
    ans=n*facto(n-1);
    return ans;
}
int main(){
    int a;
    cout<<"Enter a number to find it's factorial:- ";
    cin>>a;
   cout<< facto(a)<<endl;
    return 0;
}