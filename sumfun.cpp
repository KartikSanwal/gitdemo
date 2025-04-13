#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;
    if(first>last){
        swap(first,last);
    }

    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int first , last;
    cout << "Enter the first integer: ";
    cin >> first;  // Get first integer from user

    cout << "Enter the last integer: ";
    cin >> last;   // Get last integer from user

    // Calculate and display the sum
   cout<<sum_from_to(first , last);

    return 0;  // Exit the program

}              
