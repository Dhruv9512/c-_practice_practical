#include <iostream>
using namespace std;

void printprimeNumber(int a, int b)
{
    for (int i = a; i <= b; i++)
    {

        bool isprime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            cout << i << endl;
        }
    }
}
int main()
{

    int num1, num2;
    cout << "Enter number between which you want the prime number:-";
    cin >> num1 >> num2;

    printprimeNumber(num1, num2);
    return 0;
}