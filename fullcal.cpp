#include <iostream>

int main()
{
    int num1;
    int num2;
    int sum;
    int summin;
    double sumdiv;
    int summul;

    std::cout << "Enter your first integer: ";
    std::cin >> num1;

    std::cout << "Enter your second integer: ";
    std::cin >> num2;

    sum = num1 + num2;
    std::cout << "Addition: " << sum << std::endl;

    summin = num1 - num2;
    std::cout << "Minus: " << summin<< std::endl;

    sumdiv = num1 / num2;
    std::cout << "Minus: " << sumdiv<< std::endl;

    summin = num1 * num2;
    std::cout << "Minus: " << summul<< std::endl;



    return 0;
}
