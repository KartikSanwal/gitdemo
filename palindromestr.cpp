#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    const char str[] = "madam"; 
    int length = strlen(str);    
    bool isPalindrome = false;     

    
    for (int start = 0; start < length / 2; start++){
        if (str[start] != str[length - 1 - start]) {
            isPalindrome = false; 
            break; 
        }
    }

    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
