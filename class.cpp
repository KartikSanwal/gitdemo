#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length;
        float breadth;

    public:
        Rectangle(float l, float b) {
            length = l;
            breadth = b;
        }

        float Area() {
            return length * breadth;
        }

        float Perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    float length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;


    Rectangle rec(length, breadth);

    
    cout << "Area of the rectangle: " << rec.Area() << endl;
    cout << "Perimeter of the rectangle: " << rec.Perimeter() << endl;

    return 0;
}

