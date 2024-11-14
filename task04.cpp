#include <iostream>
#include <random>
#include <ctime>

int main()
{
    srand(time(0));

    int secret = rand() % 100 + 1;

    bool hasGuessed = false;

    int input;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> input;

        if (input == secret)
        {
            hasGuessed = true;

            break;
        }
        else if (input < secret)
        {
            std::cout << "Go higher\n";
        }
        else 
        {
            std::cout << "Go lower\n";
        }

    }

    std::cout << (hasGuessed ? "You guessed the number!" : "You failed to guess!");
}