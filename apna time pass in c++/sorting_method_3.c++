#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to made array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter a " << i << " array number:- " << endl;
        cin >> a[i];
    }

    int j, t;

    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        t = a[i];
        while ((a[j] > t) && j >= 0)
        {

            a[j + 1] = a[j];

            j--;
        }
        a[j + 1] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << " A " << i << " array number:- " << a[i] << endl;
    }

    return 0;
}
