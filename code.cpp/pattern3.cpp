#include<iostream>
using namespace std;
int main ()
{
    //12345
    //12345
    //12345
    //12345
    //12345

    int n, row ,col;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1 ; row<=n ; row=row+1)
    {
        for(col=1 ; col<=n ; col=col+1)
        {
            cout<<col<<" ";

        }
        cout<<endl;
    }
}