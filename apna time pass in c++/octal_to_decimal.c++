#include <iostream>
#include <math.h>
using namespace std;
int octalToDecimal(int n)
{
    int number = 0, i = 0;
    while (n != 0)
    {

        number = number + ((n % 10) * (pow(8, i)));
        i++;

        n /= 10;
    }

    return number;
}
int main()
{
    int n;
    cout << "Enter binary number:- ";
    cin >> n;

    int Decimal_number = octalToDecimal(n);
    cout << Decimal_number;

    return 0;
}