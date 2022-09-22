#include <iostream>
#include <map>

namespace Calculator {

float add(float x, float y) 
{
    return x + y;
}

float sub(float x, float y)
{
    return x - y;
}

float mul(float x, float y) 
{
    return x * y;
}

float div(float x, float y) 
{
    return y != 0 ? x / y : -1;
}

}

int main()
{
    char symbol;
    float num1, num2;
    std::cout << "Enter number1 and number2" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "Enter symbol(+,-,*,/)" << std::endl;
    std::cin >> symbol;
    std::map<char, float(*)(float, float)> mapTocal;
    mapTocal['+'] = Calculator::add;
    mapTocal['-'] = Calculator::sub;
    mapTocal['*'] = Calculator::mul;
    mapTocal['/'] = Calculator::div;
    std::cout << mapTocal[symbol](num1, num2) << std::endl;

    return 0;
}

