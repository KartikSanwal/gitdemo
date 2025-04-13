#include <iostream>
using namespace std;

// Function to check if a number is non-negative (>= 0)
bool isNonNegative(int num) {
    return num >= 0;
}

int main() {
    int positiveNumber = 10;
    int negativeNumber = -5;

    // Test the function with a positive number
    cout << "Is " << positiveNumber << " non-negative? " << (isNonNegative(positiveNumber) ? "True" : "False" ) << endl;

    // Test the function with a negative number
    cout << "Is " << negativeNumber << " non-negative? " << (isNonNegative(negativeNumber) ? "True" : "False" ) << endl;

    return 0;
}
