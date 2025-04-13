#include<iostream>
using namespace std;
int main(){
    int arr[] = {2 , 3,  4 , 5, 9 ,10};

    for(int i=1 ; i<6 ; i++)
    {
        cout<<arr[i]^arr[i+1];
    }
}