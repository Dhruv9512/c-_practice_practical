#include <bits\stdc++.h>
using namespace std;
int main()
{

    // Find a key number using binary search number.
    //It is essential that the array should be sorted to perform binary.

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

    int i = 0;
    int s = 0, e = n - 1;
    while (key != a[i])
    {

        i = (s + e) / 2;
        if (a[i] > key)
        {
            e = i - 1;
        }
        else
        {
            s = i + 1;
        }
    }

    if (a[i] == key)
    {
        cout << "You will find " << key << " number on " << i << " index in array";
    }
    else
    {
        cout << "This key is not in this array.";
    }
    return 0;
}