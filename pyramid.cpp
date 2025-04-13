#include <iostream>
using namespace std;

int main(){


// for(int i = 1 ; i<=5 ; i++){
//     for(int j = 1 ; j <= 5-i ;  i++){
//         cout<<" ";
//     }
//     for(int j = 1 ; j <= 2*i-1 ; j++){
//        if(j==1 || j==2*i-1){
//         cout<<"*";
//        }else{
//         cout<<" ";
//        }
//     }
//     cout<<endl;
// }
// for(int i = 5-1 ; i>=1 ; i++){
//     for(int j = 1 ; j <= 5-i ;  i++){
//         cout<<" ";
//     }
//     for(int j = 1 ; j <= 2*i-1 ; j++){
//        if(j==1 || j==2*i-1){
//         cout<<"*";
//        }else{
//         cout<<" ";
//        }
//     }

 int n = 5; // Number of rows in the upper part of the diamond

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*"; // Print star at the boundaries
            } else {
                cout << " "; // Print space in between
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1) {
                cout << "*"; // Print star at the boundaries
            } else {
                cout << " "; // Print space in between
            }
        }
        cout << endl;
    }

   
    cout<<endl;

}
  



//     * 
//    ***
//   *****
//  *******
// *********