#include <iostream>
using namespace std;

int main(){
    int temp,r, rev=0,n;
    cout<<"Enter the value of n:";
    cin>>n;

    for(temp=n; temp!=0; temp=temp/10)
    {
        r=temp%10;
        rev=rev*10+r;
    }
    if(rev==n)
    {
        cout<<"palindrome";

    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}