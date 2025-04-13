#include <iostream>
using namespace std;

int main(){
    int i,a[100],n, sum=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"sum is:"<<endl;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
    cout<<sum;
    return 0;
}