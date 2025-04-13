#include <iostream>
using namespace std;

int main(){
    char ch = '1';
    int num = 1;

    cout<<endl;


    switch (ch)
    {
    case 1:
          cout<<"first"<<"/n";
          cout<<"first again"<<endl;
          break;
    case '1': switch (num)
              {
            case 1:
            cout<<"value of num is:"<<endl;
            break;
            }
           

        
        break;
    
    default:
    cout<<"default case"<<endl;
        break;
    }
    return 0;
}