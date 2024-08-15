#include <iostream>
using namespace std;
int main()
{
    //        *
    //     *  *
    //  *  *  *
   //*  *  *  *

   int n ,row, col, x;
   cout<<"Enter the value of n:";
   cin>>n;

   for(row=1; row<=n ; row++)
   {
    for(col=1; col<=n-row ; col++)
    {
        cout<<" ";
    }
    for(x=1 ; x<=row ; x++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}