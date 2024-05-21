#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l;
        cin >> l;
        long long total = 0;
        for (long long i = 1; i <= l/2;i++) {
            total += i * i;
        }
        cout << total * 8 << endl;
    }
    return 0;
}
/*

// Number Pattern
1x1 = 8 * (0 * 0)
3x3 = 8 * (1 * 1)
5x5 = 8 * (2 * 2)
7x7 = 8 * (3 * 3)
Can use formula for sum of squares as well so alternatively

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l;
        cin >> l;
        long long total = 0;
        long long n = l /2;
        total = n * (n+1) * (2*n+1) / 6;
        cout << total * 8 << endl;
    }
    return 0;
}
*/
