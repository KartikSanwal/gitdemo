#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter the number of students: ";
    cin >> n;

    float marks[n]; 
    float sum = 0.0;

    
    for (int i = 0; i < n; ++i) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i]; 
    }
    float average = sum / n;
    cout << "The average marks of the class is: " << average << endl;

    return 0;
}
