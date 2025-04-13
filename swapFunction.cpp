#include <iostream>
using namespace std;

// Function prototype
void swapValues(int a, int b);

int main() {
    int x = 10, y = 20;

    cout << "Before Swap: x = " << x << ", y = " << y << endl;

    // Call the function to swap the values of x and y
    swapValues(x, y);

    cout << "After Swap: x = " << x << ", y = " << y << endl;

    return 0;
}

// Function definition: swaps the values of a and b, no return value
void swapValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
