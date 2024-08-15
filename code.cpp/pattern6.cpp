#include<iostream>
using namespace std;
int main ()
{
    //a a a a a
    //b b b b b
    //c c c c c
    //d d d d d
    //e e e e e

    int n , row ,col;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        char name = 'a'+row-1;
        for(col=1 ; col<=n ; col++)
        {
            cout<<name<<" ";

        }
        cout<<endl;
    }
}