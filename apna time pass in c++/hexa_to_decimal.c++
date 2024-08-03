#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int hexToDecimal(string hex)
{

    //     --------------------Method 1 -> it take more time-----------------------

    // int i=0,m=hex.size()-1,New=0;
    //    while (m>=0)
    //    {
    //     if (hex[m]=='A')
    //     {
    //         New=(10*pow(10,i)+New);
    //     }
    //     else if (hex[m]=='B')
    //     {
    //         New=(11*pow(16,i)+New);
    //     }
    //     else if (hex[m]=='C')
    //     {
    //         New=(12*pow(16,i)+New);
    //     }
    //     else if (hex[m]=='D')
    //     {
    //         New=(13*pow(16,i)+New);
    //     }
    //     else if (hex[m]=='E')
    //     {
    //         New=(14*pow(16,i)+New);
    //     }
    //     else if (hex[m]=='F')
    //     {
    //         New=(15*pow(16,i)+New);
    //     }
    //     else{
    //         int a=hex[m]-48;
    //         New=(a*pow(16,i)+New);
    //     }
    //     m--;
    //     i++;
    //    }
    //   return New;



    //   --------------------------------Method 2 -------------------------------------

    int ans=0,j=0;
    for (int i = hex.size()-1; i >=0 ; i--)
    {
        if (hex[i]>='A'&&hex[i]<='F')
        {
            ans+=((hex[i]-55)*pow(16,j));
        }
        if(hex[i]>='1' && hex[i]<='9')
        {
            ans+=((hex[i]-48)*pow(16,j));
        }
        j++;
    }
    
    return ans;
}
int main()
{
    string hex;
    cout << "Enter the hex number:- ";

    cin >> hex;
    cout << hex << " original value" << endl;

    int deceimal = hexToDecimal(hex);
    cout << deceimal;
    return 0;
}