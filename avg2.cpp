#include<iostream>
using namespace std;

int main() {
    float subject1, subject2, subject3, subject4, subject5;
    float average;

    cout << "Enter marks for 5 subjects: ";
    cin >> subject1 >> subject2 >> subject3 >> subject4 >> subject5;

    average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5;

    cout << "The average is: " << average << endl;

    return 0;
}
