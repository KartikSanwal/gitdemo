#include <iostream>
using namespace std;

int main() {
    int numStudents, numSubjects;
    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    float marks[100];
      
    for (int i = 1; i <= numStudents; i++) {
        float sum =0;
        cout << "Enter marks for student " << i << ":\n";
        for (int j = 1;j <= numSubjects; j++) {
             cout<<"Enter the marks"<<j<<":";
             cin>>marks[j];
             sum+=marks[j];
        }
        float average = (sum) / numSubjects;
        cout << "Average marks for student " << i  << ": " << average << endl;
    }

    return 0;
}
