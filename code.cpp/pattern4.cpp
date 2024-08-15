#include<iostream>
using namespace std;
int main()
{
    
    //54321
    //54321
    //54321
    //54321
    //54321

    int n,row,col;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1; row<=n ; row++)
    {
        for(col=n ; col>=1 ; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}