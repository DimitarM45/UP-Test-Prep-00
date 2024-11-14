#include <iostream>

unsigned long long baseTenToBaseN(unsigned int number, unsigned short base)
{
    unsigned long long result = 0;

    unsigned long long tenAccumulator = 1;

    while (number != 0)
    {
        result += (number % base) * tenAccumulator;

        number /= base;
        tenAccumulator *= 10;
    }
    
    return result;
}

unsigned int occurrencesOf11(unsigned long long number)
{
    int occurences = 0;

    while (number != 0)
    {
        if (number % 100 == 11)
        {
            occurences++;

            number /= 10;
        }
        
        number /= 10;
    }

    return occurences;
}


int main()
{
    unsigned int number;
    std::cin >> number;

    unsigned long long numberInBase2 = baseTenToBaseN(number, 2);

    std::cout << occurrencesOf11(numberInBase2);
}