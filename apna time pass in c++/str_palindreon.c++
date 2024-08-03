#include <bits\stdc++.h>
using namespace std;
int main()
{
    
    string a;
    cin >> a;
    cin.ignore();
    bool check = 1;
    int n = a.length()-1;
    for (int i = 0; i <=n/2; i++)
    {
        
        if (a[i] != a[n - i])
        {
            check = 0;

            break;
        }
    }

    if (check == 1)
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome";
    }


   


    return 0;
}