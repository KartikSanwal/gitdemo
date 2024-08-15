#include <iostream>
using namespace std;

int main(){
    int num;
    // to handle very large value
    unsigned long long int factorial=1;

    cout<<"Enter the value of num:";
    cin>>num;

    if(num<0){
        cout<<"factorial of negative num not exists";
    }

    else{
        for( int i=1; i <= num; i++){
            factorial=factorial*i;
        }
        cout<<"factorial of "<<num <<" = "<<factorial<<endl;
    }

    return 0;
}