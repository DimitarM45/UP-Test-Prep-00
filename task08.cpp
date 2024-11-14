#include <iostream>
#include <cmath>

long long baseNtoBase10(unsigned long long number, short base)
{
    long long result = 0;
    int baseAccumulator = 1;

    while (number != 0)
    {
        result += (number % 10) * baseAccumulator;

        baseAccumulator *= base;
        number /= 10;
    }

    return result;
}

int main()
{
    unsigned long long number;
    short base;

    std::cin >> number;
    std::cin >> base;

    std::cout << "Base10: " << baseNtoBase10(number, base);
}