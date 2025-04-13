#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float breadth;

    public:
    Rectangle(length , breadth){
    length = l;
    breadth =b;
    }

    float area(){
        return length*breadth;
    }

    
};
    int main()
    {
        float length, breadth;
    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    Rectangle r(length , breadth)
    cout << "Area of the room: " << r.area() << endl;
    
    return 0;
    }