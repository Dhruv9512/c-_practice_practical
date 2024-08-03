#include <iostream>
// int get(int n){
// if(n==1 || n<1){
//     return 1;
// }
// int ans = get(n-1)+1;
//  std::cout<<"+ 1/"<<ans<<" ";
//  return ans;

// }
int main()
{
    int n;
    std::cout << "Enter the 'n' number of series:- ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "not good";
    }
    else
    {
        std::cout << "1 ";
        //  get(n);
        for (int i = 1; i < n; i++)
        {
            std::cout << "+ 1/" << i + 1 << " ";
        }
    }

    return 0;
}