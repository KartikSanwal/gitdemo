#include <iostream>
using namespace std;

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int value = 1; 
        for (int space = 1; space < n - i; space++) {
            cout << " ";
        }
       
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1); 
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> rows;
    printPascalsTriangle(rows);
    return 0;
}

