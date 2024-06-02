#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int h, m; char c;
    cin >> h >> c >> m;
    string time = (h < 12) ? " AM" : " PM";
    h = (h % 12 == 0 ? 12: h%12 );
    cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m << time << "\n";
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
