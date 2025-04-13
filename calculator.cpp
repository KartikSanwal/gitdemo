#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    // Display the calculator options
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Input numbers
    cout << "Enter two numbers: ";
    cin >> num1 >>num2;

    // Perform the calculation based on the operator
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }

    return 0;
}
