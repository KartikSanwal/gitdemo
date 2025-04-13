#include<iostream>
using namespace std;
int main(){
    int a , b ,third ;
    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    third = a;
    a = b;
    b = third;

    cout<<"After swapping a is "<<a<<" and b is "<<b<<endl;

}