#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n,k;
        cin >> n >> k; // k is the number of positive integer
        int a = n - k + 1; // Last number of odd case
        int b = n - 2*k + 2; // Last number of even case
        if (k > n) cout << "NO" <<endl;
        else if (a%2 == 1 && a>0) {
            cout << "YES" << endl;
            for (int j=0;j<k-1;j++) cout << 1 << " ";
            cout << a << endl;
        }
        else if (b%2 == 0 && b>0) {
            cout << "YES" << endl;
            for (int j=0;j<k-1;j++) cout << 2 << " ";
            cout << b << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
