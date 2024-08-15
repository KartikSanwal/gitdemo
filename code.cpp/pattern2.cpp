#include<iostream>
using namespace std;
int main ()
{
    //1111
    //2222
    //3333
    //4444

    int n, row ;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1 ; row<=n ; row=row+1)
    {
        int col;
        for(col=1 ; col<=n ; col=col+1){
            cout<<row;
        }
        cout<<endl;
    }
}