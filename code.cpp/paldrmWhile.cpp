#include <iostream>
using namespace std;

int main(){
    int a, n, rev=0, r;
    cout<<"Enter the value of n:";
    cin>>n;
    a=n;
    while(n!=0)
    {
        r = n%10;
        rev = rev*10+r;
        n=n/10;
    }
        if(a==rev)
        {
            cout<<"Palindrome"<<endl;
        }
        else{
            cout<<"Not palindrome"<<endl;
        }

    
    return 0;
}