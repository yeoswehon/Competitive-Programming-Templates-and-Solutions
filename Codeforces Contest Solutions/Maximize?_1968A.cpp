#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int ans = 0; 
        int k = 1;
        for (int y = 1; y < x; y++) {
            if (ans < (gcd(x,y) + y)) {
                ans = gcd(x,y) + y;
                k = y;
            }      
        }
        cout << k << endl;
    }
    return 0;
}
