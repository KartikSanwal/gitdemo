#include <iostream>
using namespace std;

// Function prototypes
void add(int num1, int num2);
void subtract(int num1, int num2);
void multiply(int num1, int num2);
void divide(int num1, int num2);

int main() {
    int num1, num2;
    char op;

    // Ask the user for two numbers and an operator
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cin>>op;


    // Switch statement to perform the correct operation
    switch (op) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

// Function to add two numbers
void add(int num1, int num2) {
    cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

// Function to subtract two numbers
void subtract(int num1, int num2) {
    cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

// Function to multiply two numbers
void multiply(int num1, int num2) {
    cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

// Function to divide two numbers
void divide(int num1, int num2) {
    if (num2 != 0) {
        cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}
