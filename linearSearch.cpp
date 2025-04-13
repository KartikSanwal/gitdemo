#include <iostream>
using namespace std;

int main() {
    int n, element_to_find;
    
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];  // Declare the array
    
    // Input the array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Input the element to search
    cout << "Enter the element to search for: ";
    cin >> element_to_find;
    
    bool found = false;  // Flag to check if the element is found

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == element_to_find) {
            found = true;
            cout << "Element found at index " << i << endl;
            break;  // Exit the loop when the element is found
        }
    }
    
    // If the element is not found
    if (!found) {
        cout << "Element not found in the array" << endl;
    }
    
    return 0;
}
