#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter length of pattern.";
    cin >> n;

    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        int p = i;
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= i + t; k++)
        {
            cout << p << " ";
            if (k <= ((i + t) / 2))
            {
                p--;
            }
            else
            {
                p++;
            }
        }
        t++;

        cout << endl;
    }

    return 0;
}