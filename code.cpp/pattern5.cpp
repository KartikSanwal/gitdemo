#include<iostream>
using namespace std;
int main()
{
    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25

    int n , row ,col;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1 ; col<=n; col++)
        {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}