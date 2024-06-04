#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int left,right;
    cin >> left >> right; // l <= x <= r , 2l <= r 
    // do it under x becomes 1
    // choose p such that p >= 2 and p | x 
    int score = log2(right);
    cout << score << '\n';
    // lg l + 1 <= lg r
    // lg l < floor(lg r) <= lg r
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    //scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
