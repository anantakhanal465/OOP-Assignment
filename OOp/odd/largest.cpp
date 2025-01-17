#include <iostream>
#include <vector>
#include <limits.h>

int findLargestElement(const std::vector<int>& arr) {
    int maxElement = INT_MIN; // Initialize to the smallest possible integer

    for (int num : arr) {
        if (num > maxElement) {
            maxElement = num; // Update maxElement if current number is greater
        }
    }

    return maxElement;
}

int main() {
    std::vector<int> arr = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    std::cout << "The largest element is: " << findLargestElement(arr) << std::endl;
    return 0;
}
