#include <iostream>

int main() {
    int dividend, divisor;
    double result;

    // Get two integers from the user
    std::cout << "Please enter two integers to divide: ";
    std::cin >> dividend >> divisor;

    // Check if the divisor is not zero before dividing
    if (divisor != 0) {
        result = static_cast<double>(dividend) / divisor;  // Perform division
        std::cout << dividend << "/" << divisor << " = " << result << '\n';
    } else {
        // Output error message if division by zero is attempted
        std::cout << "Error: division by zero.\n";
    }
    
    return 0;
}
