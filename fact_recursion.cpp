#include <iostream>
using namespace std;

int factorial(int n) {
    if ((n == 1)||(n==0))
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

