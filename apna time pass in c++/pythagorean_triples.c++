#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a, b, c;
    a = max(max(x, y), z);

    if (a == x)
    {
        b = y;
        c = z;
    }
    if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    // Bool condition

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int a, b, c;
    cout << "Enter the value to find it is a pythagorean triples or not:- ";
    cin >> a >> b >> c;

    if (check(a, b, c))
    {
        cout << "It is pythagorean triples" << endl;
    }
    else
    {
        cout << "It is not pythagorean triples" << endl;
    }

    return 0;
}