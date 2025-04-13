#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (nCr)
int binomialCoefficient(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's Triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces to format the triangle
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }

        // Print the binomial coefficients for the current row
        for (int j = 0; j <= i; j++) {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    // Input number of rows for Pascal's Triangle
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    // Print Pascal's Triangle
    printPascalsTriangle(n);

    return 0;
}
