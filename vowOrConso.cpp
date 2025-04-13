#include <iostream>
using namespace std;

void checkVowelOrConsonant(char ch) {
   
    ch = tolower(ch);
  
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    } 

    else if ((ch >= 'a' && ch <= 'z')) {
        cout << ch << " is a consonant." << endl;
    } 
    
    else {
        cout << "Invalid input. Please enter an alphabetic character." << endl;
    }
}

int main() {
    char ch;
  
    cout << "Enter a character: ";
    cin >> ch;

    checkVowelOrConsonant(ch);

    return 0;
}
