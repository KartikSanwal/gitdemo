#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<"\n";
    cin>>n;

    switch (n)
    {
        case 1:
        cout<<"MON" ;
        
        case 2:
        cout<<"TUE";
        break;
        case 3:
        cout<<"WED";
        break;
        case 4:
        cout<<"THU";
        break;
        case 5:
        cout<<"FRI";
        break;
        case 6:
        cout<<"SAT";
        break;
        case 7:
        cout<<"SUN";
        break;
        default:
        cout<<"invalid num";

     
}}