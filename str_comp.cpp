#include <all_headers.h> 
using namespace std;

int main(){
    char str1[] = "kasam";
    char str2[] = "kasam" ;

    int result = strcmp(str1 , str2);

    if(result==0){
        cout<<"The strings are equal"<<endl;
    }
    else{
        cout<<"strings are not equal"<<endl;
    }
    return 0;
}