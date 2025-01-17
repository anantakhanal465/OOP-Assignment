#include <iostream>

int main() {
    int number = 2; // Start with the first even number

    do {
        std::cout << number << " ";
        number += 2; // Increment by 2 to get the next even number
    } while (number <= 20); // Continue until the number is greater than 20

    return 0;
}
