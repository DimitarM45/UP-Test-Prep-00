#include <iostream>

int main()
{
    unsigned int a, b, c;
    std::cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
        {
            std::cout << "Equilateral";
        }
        else if (a == b || b == c || c == a)
        {
            std::cout << "Isosceles";
        }
        else
        {
            std::cout << "No equal sides";
        }
    }
    else
    {
        std::cout << "Such triangle does not exist!";
    }
}