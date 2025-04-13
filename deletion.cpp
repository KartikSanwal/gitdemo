#include<iostream>
using namespace std;
int main()
{

int arr[10];
int size = 5; 

cout << "Original array: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;

int position = 2; 

for (int i = position; i < size - 1; ++i) {
arr[i] = arr[i + 1];
}

--size; 

cout << "Array after removal: ";
for (int i = 0; i < size; ++i) {
cout << arr[i] << " ";
}
cout << endl;
}