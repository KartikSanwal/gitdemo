#include<iostream>
using namespace std;
int main ()
{
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e

    int n, row, col;
    cout<<"Enter the number:";
    cin>>n;


    for(row=1 ; row<=n ; row++)
    {
    
        for( col=1 ; col<=n ; col++)
        { 
            char name = 'a'+col-1;
            cout<<name<<" ";

        }
        cout<<endl;

    }
}