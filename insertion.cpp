#include<iostream>
using namespace std;
int main()
{
// Declare and initialize an array
int arr[10] = {1, 2, 3, 4, 5};
// Calculate the current size of the array
int size = 5; // Initial size of the array
// Print the original array
cout << "Original array: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl; 
// Declare variables for insertion
int position = 2; // Position where the element is to be inserted
int value = 10; // Element to be inserted
// Shift elements to the right to make space for the new element
for (int i = size; i > position; --i) {
arr[i] = arr[i - 1];
}
// Insert the element at the specified position
arr[position] = value;
// Increment the size of the array
++size;
// Print the array after insertion
cout << "Array after insertion: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";

}
cout << endl;
}