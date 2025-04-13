#include <iostream>
using namespace std;

int main(){
    int n, row, col;
    cout<<"Enter the input: ";
    cin>>n;

    for(row=1; row<=n ; row++)
    {
        //space print
        for(col=1 ; col<=n-row ; col++)
        {
            cout<<" ";
        }
        //* print
        for(col=1 ; col<=2*row-1 ; col++)
        {
            cout<<"*";
        }
        cout<<endl;
         
    }
    return 0;
}