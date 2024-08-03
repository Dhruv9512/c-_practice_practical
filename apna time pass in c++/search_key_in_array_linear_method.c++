#include <bits\stdc++.h>
using namespace std;
int main()
{
    // Find a key using a linear method.
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
    int key;
    cout << "Enter the key you want to find in  array:- ";
    cin >> key;
    cout << endl
         << endl;

    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "You will find " << key << " number in " << i << " index in array.";
            break;
        }
    }
    if (i == n)
    {
        cout << "The " << key << " is not in this array.";
    }

    return 0;
}