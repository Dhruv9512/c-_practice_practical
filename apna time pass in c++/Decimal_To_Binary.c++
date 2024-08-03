#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n)
{
    int  ans = 0,a=1;
  
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            
            ans = ((0 * a) + ans);

           
        }
        else
        {
           
            ans = ((1 * a) +ans );
             
        }
        n/= 2;
        cout<<n<<endl;
        a*=10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter your decimal number:- ";
    cin >> n;

    cout << "The binary number of " << n << " is " << decimalToBinary(n) << endl;
    return 0;
}