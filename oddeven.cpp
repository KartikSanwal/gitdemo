#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,9};
    int even_count = 0;
    int odd_count = 0;

    for(int i=0 ; i<7; i++)
    {
        if(arr[i]%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Number of even elements: "<<even_count<<endl;
    cout<<"Number of odd elements: "<<odd_count;

}      
