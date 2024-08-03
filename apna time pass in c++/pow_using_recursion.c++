#include<bits\stdc++.h>
using namespace std;
//recursion
int power(int a , int b){
    int ans;
    if (b==0)
    {
        return 1;
    }
    
        ans=a*power(a,b-1);
    return ans;
}
int main(){
    int n,p;
    cout<<"Enter a n and p value to find it's power:- ";
    cin>>n>>p;
     cout << power(n,p)<<endl;


     // checking 
      cout<<pow(n,p);
    return 0;
}