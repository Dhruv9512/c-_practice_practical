#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

void pascal(int n)
{
    int val;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i + 1; k++)
        {

            val = fact(i) / (fact(i - k) * fact(k));
            cout << val << " ";
        }

        cout << endl;
    }
}
int main()
{

    int n;
    cout << "Enter number to print pascal:- " << endl;
    cin >> n;
    pascal(n);
    return 0;
}
