/* 
Author: Swe Hon
Date: 27 May 2024
*/

#include <iostream>
using namespace std;

bool prime_no_checker(int n) {
    // given int n = a * b and a <= b,
    // (a*a <= a*b) => (a*a <= n) => (a <= sqrt(n))
    if (n == 1 || n == 0) return false;
    for (int i = 2; i*i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


void sieve_of_eratosthenes(int n) {
    bool isPrime[n+1];
    for (int i = 2; i <= n; i++) isPrime[i] = true; // Initialize all numbers as prime
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            // Mark multiples of i as non-prime starting from i*i
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}
int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieve_of_eratosthenes(n);
    cout << endl;
    return 0;
}
