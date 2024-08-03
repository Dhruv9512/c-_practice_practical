#include <bits\stdc++.h>
using namespace std;
int main()
{
    // Sorting method 1.

    int n;
    cout << "Enter a number of array you want to create:- ";
    cin >> n;
    cout << endl
         << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " number in array:- ";
        cin >> a[i];
    }
    cout << endl
         << endl;

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0 + i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
//print array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}