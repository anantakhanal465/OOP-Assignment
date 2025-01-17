// Find the sum of all the elaments in an array.

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    for (int i = 0; i < n; ++i) {
        sum += arr[i]; // Add each element to the sum
    }

    std::cout << "The sum of the elements in the array is: " << sum << std::endl;

    return 0;
}


