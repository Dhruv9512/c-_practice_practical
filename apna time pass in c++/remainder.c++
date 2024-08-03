#include<iostream>
using namespace std;

int main(){
    int D,d;
    cout<<"Enter value of dividend:-\t"<<endl;
    cin>>D;
    cout<<"Enter the value of divisor:-\t"<<endl;
    cin>>d;
    if (d==0)
    {
        cout<<"This division is not possible."<<endl;
        
    }
    else{
        cout<<"The remainder after dividing "<<D<<" by "<<d<<" is:-"<< D%d <<endl;
    }
    
    return 0;
}