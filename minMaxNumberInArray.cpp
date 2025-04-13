#include <iostream>
#include<limits.h>
using namespace std;

int main(){
    // min value
    int a[5]={2,3,4,11,1};
    int ans = INT_MAX;

    for(int i=0;i<5;i++)
    {
        if(a[i]<ans){
        ans=a[i];
        }
    }
    cout<<ans<<endl;
    
    // max value

    ans = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(a[i]>ans){
        ans=a[i];
        }
    }
    cout<<ans;
}