#include <iostream>
using namespace std;

int main() {
    int numStudents, numSubjects;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    int marks[numSubjects]; // 1D array to store marks of each subject for a student

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter marks for student " << i + 1 << ":\n";
        int sum = 0;
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[j];
            sum += marks[j];
        }
        float average = static_cast<float>(sum) / numSubjects;
        cout << "Average marks for student " << i + 1 << ": " << average << endl;
    }

    return 0;
}
