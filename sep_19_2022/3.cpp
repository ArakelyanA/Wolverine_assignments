//Գրել ծրագիրը, որը կգտնի երկու փոփոխականների մաքսիմումը։
#include <iostream>
int main()
{
    int num1, num2;
    std::cout << "Enter the numbers" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << "The maximum number is ";
    num1 > num2 ? std::cout << num1 << std::endl : std::cout << num2 << std::endl;
}