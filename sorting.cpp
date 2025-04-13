#include <iostream>
using namespace std;

int main(){
    int arr[7,12,15,2,1,0,19,25,35];
    for(int i=1; i<9 ; i++)
    {
        int temp=arr[i];
        int j=i-1;
        int k=j+1;
        while(j>=0 && temp<arr[1])
        {
            arr[j+1]=arr[j];
            j--;
        }
          
          int k= temp;
    }

    return 0;
}