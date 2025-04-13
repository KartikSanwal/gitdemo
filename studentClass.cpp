/*#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int grade;

public:
    // Constructor to initialize student attributes
    Student(string student_name, int student_age, int student_grade) {
        name = student_name;
        age = student_age;
        grade = student_grade;
    }
    private:
    void Studentdetail() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    
    Student student1("Kartik", 20, 85);

    student1.Studentdetail();

    return 0;
}*/
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int grade;

public:
    
    Student(string student_name, int student_age, int student_grade) {
        name = student_name;
        age = student_age;
        grade = student_grade;
    }

    void displayStudent() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {

    Student student1("Kartik", 18, 85);

    student1.displayStudent();

    return 0;
} dnn

