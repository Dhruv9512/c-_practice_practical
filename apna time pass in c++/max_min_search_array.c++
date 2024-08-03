#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number from which you want to find a  'max.' and 'min.' number:- ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the" << i + 1 << " number in array:-";
        cin >> a[i];
        cout << endl;
    }

    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }

    cout << "The maximum number among the array is:- " << maxi << endl
         << "The minimum number amomg the array is:- " << mini;

    return 0;
}