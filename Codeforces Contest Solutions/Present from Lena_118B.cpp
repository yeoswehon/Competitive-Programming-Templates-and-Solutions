#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i];
using namespace std;

void solve() { // 2n + 1
    // n 2 = 9, n 3 = 13
    int n; cin >> n;
    for (int i = 0; i <=n;i++) {
        for (int j=0;j<(n-i)*2;j++) {
            cout << " ";
        }
        for (int j=0;j<=i;j++){
            cout << j;
            if (j != i) cout << " ";
        }
        for (int j = i-1;j>=0;j--) {
            cout << " ";
            cout << j;
        }
        cout << "\n";
    }
    for (int i = n-1; i>=0;i--) {
        for (int j=0;j<(n-i)*2;j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }
        for (int j = i-1; j >=0;j--) {
            cout << " ";
            cout << j;
        }
        if (i != 0) cout << "\n";
    }
}
int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t = 1;
    //cin >> t;
    //scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
