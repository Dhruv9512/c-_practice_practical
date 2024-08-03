#include <bits/stdc++.h>
#include <string>
using namespace std;

string Decimal_To_Hex(int n)
{
    string ans = "";

    while (n != 0)
    {
        int temp;
        temp = (n % 16);
        if (temp >= 1 && temp <= 9)
        {
            ans.push_back(temp + 48);
        }
        if (temp >= 10 && temp <= 15)
        {

            ans.push_back(temp + 55);
        }
        n /= 16;
    }
    reverse(begin(ans), end(ans));
    return ans;
}
int main()
{
    int n;
    cout << "Enter a decimal number to convert it into hex:- ";
    cin >> n;

    string hex = Decimal_To_Hex(n);

    cout << "After the conversion:- " << hex;

    return 0;
}