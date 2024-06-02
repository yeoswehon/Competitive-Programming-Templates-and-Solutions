#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << (((i / 2 + j / 2) % 2 == 1) ? "." : "#");
        }
        cout << '\n';
    }
}


int main() {
    // ios::sync_with_stdio(false);
    int t = 1;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
