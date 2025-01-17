#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number to count down from: ";
    std::cin >> number;

    while (number >= 0) {
        std::cout << number << std::endl;
        number--;  // Decrement the number
    }

    return 0;
}
