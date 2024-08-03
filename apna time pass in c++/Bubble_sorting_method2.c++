#include<bits\stdc++.h>
using namespace std;
int main(){
    //Sorting method2
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


    int temp;
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}