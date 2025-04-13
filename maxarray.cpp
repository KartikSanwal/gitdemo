#include <iostream>
using namespace std;

int main(){
    int i,a[100],n,max=a[0];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
        for(int i=0;i<n;i++){
            if(a[0]>a[i])
            a[0]=a[i];
        }
        cout<<"largest element: "<<a[0];

        

    
    return 0;
}