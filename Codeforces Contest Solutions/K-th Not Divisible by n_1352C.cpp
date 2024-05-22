#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        ll n,k;
        cin >> n >> k;
        ll ans = k+ (k-1)/(n-1);
        cout << ans << endl;
    }
    return 0;
}
