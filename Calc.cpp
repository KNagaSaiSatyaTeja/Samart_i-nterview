#include <iostream>

class Calculator
{
private:
    double result;

public:
    Calculator() : result(0) {}

    // Basic arithmetic operations
    double add(double a, double b)
    {
    }

    double subtract(double a, double b)
    {
        return a-b;
    }

    double multiply(double a, double b)
    {
    }

    double divide(double a, double b)
    {
    }
};

int main()
{
    Calculator calc;
    char operation;
    double num1, num2;

    std::cout << "Simple Calculator\n";
    std::cout << "Available operations: +, -, *, /\n";

    try
    {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter operation: ";
        std::cin >> operation;
        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation)
        {
        case '+':
            std::cout << "Result: " << calc.add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Invalid operation\n";
        }
    }
    catch (const std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}