#include <bits\stdc++.h>
using namespace std;
int main()
{
    char o;
    cout << "Enter a operation ";
    cin >> o;
    int n, m;
    cout << "\n\n";
    cout << "**************Enter the type of matrix n for rows and m is for column*************** " << endl;
    cout << "Enter a value of n :- ";
    cin >> n;
    cout << "Enter a value of m :- ";
    cin >> m;
    int a[n][m], b[n][m], c[n][m];

    // Take input of array a.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter row " << n << " and column " << m << " value of array 'a' :- ";
            cin >> a[i][j];
        }
    }
    cout << "\n\n";

    // Take input of array b.

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Enter row " << n << " and column " << m << " value of array 'a' :- ";
            cin >> b[i][j];
        }
    }
    //   Addition
    if (o == '+')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
    // subtraction
    if (o == '-')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                c[i][j] = a[i][j] - b[i][j];
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }
    // Multiplication
    if (m == n)
    {

        if (o == '*')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int ans = 0;
                    for (int k = 0; k < m; k++)
                    {
                        ans += a[i][k] * b[k][j];
                    }
                    c[i][j] = ans;
                }
            }
        }

        // print c

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << c[i][j] << "\t";
            }
            cout << endl;
        }
    }

    return 0;
}