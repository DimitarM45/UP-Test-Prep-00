#include <iostream>

int main()
{
    int amount; 
    std::cin >> amount;

    int quarters, tens, fives, coins;

    quarters = amount / 25;
    tens = amount % 25 / 10;
    fives = amount % 25 % 10 / 5;
    coins = amount % 25 % 10 % 5;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Tens: " << tens << "\n";
    std::cout << "Fives: " << fives << "\n";
    std::cout << "Coins: " << coins; 
}