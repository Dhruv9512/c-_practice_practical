#include <iostream>
using namespace std;
int main()
{
    int j, a, b;
    cout << "Enter the number in a and b:" << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }

        if (j == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}