#include<iostream>
using namespace std;

int fact(int n){

    int f=1;
    for (int i = 1; i <=n; i++)
    {
        f=f*i;
    }
    
    return f;

}
int main(){

    // Formula of ncr = n!/((n-r)! * r!)

    int n,r,ncr;
    cout<<"Enter value of 'n' and 'r' :- "<<endl;
    cin>>n>>r;

    ncr=fact(n)/fact(n-r)*fact(r);
    cout<<ncr<<"is the ncr.";

    return 0;
}