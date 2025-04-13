#include <iostream>
#include <string>
using namespace std;

bool elfish(const string& word) {
    bool has_e = false, has_l = false, has_f = false;

    for (char c:word) {
        if (c == 'e') has_e = true;
        if (c == 'l') has_l = true;
        if (c == 'f') has_f = true;
        if (has_e && has_l && has_f) return true;  // If all letters found, return true
    }

    return false;  // If one or more letters are missing, return false
}

int main() {
    string word;
    cout << "Enter a word to check if it's elfish (contains 'e', 'l', and 'f'): ";
    cin >> word;

    if (elfish(word))
        cout << word << " is an elfish word." << endl;
    else
        cout << word << " is not an elfish word." << endl;

    return 0;
}
