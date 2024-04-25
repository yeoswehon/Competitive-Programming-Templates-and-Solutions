#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long x;
    cin >> n;
    while (n--) {
      bool flag = false;
        cin >> x;
        if ((x-1)/2 != 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
