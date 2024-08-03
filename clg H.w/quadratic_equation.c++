#include <iostream>
#include <math.h>
#include <iomanip>
int find_D(int a, int b, int c)
{
    return std::sqrt(b) - (4 * a * c);
}

void find_root(int D, int a, int b, int c)
{
    if (D > 0)
    {
        float root1, root2;
        root1 = -b + std::sqrt(D) / 2 * a;
        root2 = -b - std::sqrt(D) / 2 * a;
        std::cout << "The 2 real roots is:- " << std::setprecision(3) << root1 << " and" << std::setprecision(3) << root2 << std::endl;
    }
    else if (D == 0)
    {
        float root1;
        root1 = (-b / (2 * a));
        std::cout << "The 1 real roots is:- " << std::setprecision(3) << root1 << std::endl;
    }
    else
    {
        float root1, root2;
        float real_num = (-b / (2 * a));
        float imag = std::sqrt(-D) / 2 * a;
        std::cout << "The 2 complex root is:- " << real_num << "+" << std::setprecision(3) << imag << "i" << " and" << real_num << "-" << std::setprecision(3) << imag << "i";
    }
}
int main()
{

    int a, b, c;
    std::cout << "Enter the value of 'a' constant:-" << std::endl;
    std::cin >> a;
    std::cout << "Enter the value of 'b' constant:-" << std::endl;
    std::cin >> b;
    std::cout << "Enter the value of 'c' constant:-" << std::endl;
    std::cin >> c;

    int D = find_D(a, b, c);
    find_root(D, a, b, c);

    return 0;
}