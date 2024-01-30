#include <iostream>
#include <algorithm>
#include <vector>

void convertToWaveArray(std::vector<int>& arr) {
    // Sort the array in ascending order
    std::sort(arr.begin(), arr.end());

    // Swap adjacent elements to create a wave array
    for (int i = 0; i < arr.size() - 1; i += 2) {
        std::swap(arr[i], arr[i + 1]);
    }
}

int main() {
    // Sample input
    std::vector<int> inputArray = {2, 4, 7, 8, 9, 10};

    // Convert the array to a wave array
    convertToWaveArray(inputArray);

    // Display the resulting wave array
    std::cout << "Wave array: ";
    for (int num : inputArray) {
        std::cout << num << " ";
    }

    return 0;
}
