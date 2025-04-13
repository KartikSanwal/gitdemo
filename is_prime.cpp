#include <iostream>
using namespace std;

int is_prime(int n) {
    if (n <= 1)
     return 0;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
         return 0;  // If divisible by any number other than 1 and itself, it's not prime
    }
    return 1;
}

int main() {
    int num = 29;
    cout << "Is " << num << " prime? " << is_prime(num) << endl;  // Output: 1 (prime)
    return 0;
    
}
