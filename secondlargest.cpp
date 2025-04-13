#include <iostream>
using namespace std;

int main(){
    int arr[100]={10,5,8,20,2};
    int size = 5;
    //initializing 1st and 2nd largest
    int first_largest = arr[0];
    int second_largest = arr[0];

    for( int i=1 ; i<size ; i++)
    {
      if(arr[i]>first_largest){
      second_largest = first_largest;
      first_largest = arr[i];
      }
      else if(arr[i]>second_largest&&arr[i]!=first_largest)
    {
       second_largest=arr[i];
    }
    }
    cout<<"second largest element: "<<second_largest;
    
}