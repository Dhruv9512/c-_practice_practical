#include <iostream>
using namespace std;
int main()
{
    int a,sum = 0;
    printf("Enter your Digit:-");
    cin >> a;
     
    
    
    while(a!=0)
     {   
        sum=sum+(a % 10);
        a = a / 10;
    }
       cout << sum << endl;


    return 0;
}