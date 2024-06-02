#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a < b && b < c) cout << "STAIR\n";
    else if (a < b && b > c) cout << "PEAK\n";
    else cout << "NONE\n";
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
