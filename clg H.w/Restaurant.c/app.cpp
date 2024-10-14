#include <bits/stdc++.h>
int main(){
    int c;
    do
    {  
        std::cout << "========== RPD. RESTAURANT =========="<< "\n\n";
        std::cout << "Please select your prefered operation"<<"\n";
        std::cout << "1.Generate Invoice\n2.Show all Invoices\n3.Search Invoice\n4.Exit";
        std::cout<<"\n\nYour Choice:- ";
        std::cin >> c;
    } while (c!=2);
    
    return 0;
}