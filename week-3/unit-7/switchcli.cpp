#include <iostream>

int main() {
    int choice;
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You chose option 1" << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2" << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}
