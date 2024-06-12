#include <iostream>

//two ints with sum. User input two numbers indivually
//print the sum

int main() {
    int a, b;
    std::cout << "Enter num1: ";
    std::cin >> a;
    std::cout << "Enter num2: ";
    std::cin >> b;
    std::cout << "The sum of " << a << " and " << b << " is " << a + b << std::endl;
    return 0;
}

