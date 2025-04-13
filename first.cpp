#include<iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,4,5};
    int size = 5;
    cout<<"original array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int position = 2;
    for(int i =position ;i<size-1;i++)
    {
        arr[i]=arr[i+1];

    }
    size--;
    cout<<"After the removel: ";
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

