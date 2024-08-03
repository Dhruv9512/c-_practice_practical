#include <bits/stdc++.h>
using namespace std;
int Add_binary_number(int n1, int n2)
{
    int ans = 0, c = 0, t1, t2, temp;

    while (n1 != 0)
    {
        t1 = n1 % 10;
        t2 = n2 % 10;
        temp = t1 + t2 + c;
        if (temp == 2)
        {
            ans = 10 * ans + 0;
            c = 1;
        }
        else if (temp == 3)
        {
            ans = 10 * ans + 1;
            c = 1;
        }
        else
        {
            ans = 10 * ans + temp;
        }

        n1 /= 10;
        n2 /= 10;
        if (n1 == 0)
        {
            ans = 10 * ans + c;
        }
    }

    return ans;
}
int main()
{

    int n1, n2;
    cout << "Enter the 1 binary number:- ";
    cin >> n1;
    cout << endl
         << "Enter the 2 binary number:- ";
    cin >> n2;
    cout << endl;

    int new_binary = Add_binary_number(n1, n2);
    cout << "After the of 2 binary number the ans is:- " << new_binary;

    return 0;
}