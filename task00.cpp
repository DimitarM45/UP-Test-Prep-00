#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1, x2;

        x1 = (-b + sqrt(discriminant)) / 2;
        x2 = (-b - sqrt(discriminant)) / 2;

        std::cout << "x1: " << x1 << " x2: " << x2;
    }
    else if (discriminant == 0)
    {
        double x = -b / 2;

        std::cout << "x: " << x;
    }
    else 
    {
        std::cout << "No real solutions";
    }
}