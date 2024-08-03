#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[n + 1];
    cin.getline(a, n);

    int i = 0, max = 0, current = 0, s;
    while (1)
    {
        if (current == 0)
        {
            s = i;
        }

        if (a[i] == ' ' || a[i] == '\0')
        {
            if (max < current)
            {
                max = current;
            }
            current = 0;
        }
        else
        {
            current++;
        }
        if (a[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << "maximum word is " << max << endl;

    for (int j = 0; j < max; j++)
    {
        cout << a[j + s];
    }

    return 0;
}