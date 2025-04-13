#include "all_headers.h"  // Include the custom header

int main() {
    // Using <iostream> for basic input/output
    std::cout << "Welcome to the C++ program!\n";

    // Using <string> for string operations
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!\n";

    // Using <vector> to store numbers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using <algorithm> for basic algorithms like reversing the vector
    std::reverse(numbers.begin(), numbers.end());

    std::cout << "Reversed numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Using <cmath> for some mathematical operations
    double num = 9.0;
    std::cout << "Square root of " << num << " is " << std::sqrt(num) << "\n";

    // Using <chrono> for time operations
    auto start = std::chrono::high_resolution_clock::now();

    // Simulate work by sleeping for 1 second using <thread>
    std::this_thread::sleep_for(std::chrono::seconds(1));

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Elapsed time: " << elapsed.count() << " seconds\n";

    // Program successfully completed
    return 0;
}
