#include <iostream>

int main()
{
    unsigned int year;
    std::cin >> year;

    std::cout << ((year % 400 || (year % 4 == 0 && year % 100 != 0)) ? "is a leap year" : "not a leap year");
}