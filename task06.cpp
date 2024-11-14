#include <iostream>

unsigned long long baseTenToBaseN(unsigned int number, unsigned short base)
{
    unsigned int result = 0;

    unsigned int tenAccumulator = 1;

    while (number != 0)
    {
        result += (number % base) * tenAccumulator;

        number /= base;
        tenAccumulator *= 10;
    }
    
    return result;
}

int main()
{
    unsigned int number;
    unsigned short base;

    std::cin >> number >> base;

    std::cout << "Converted number: " << baseTenToBaseN(number, base);
}