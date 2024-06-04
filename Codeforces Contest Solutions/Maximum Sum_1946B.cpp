#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int P = 1e9 + 7;

void solve() {
    ll n, k; // n is the number of elements and k is the number of operations
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll subarray_sum = 0, sum_array = 0, curr = 0;
    for (int i = 0; i < n; i++) {
        curr += a[i];
        sum_array += a[i];
        curr = max(0LL, curr);
        subarray_sum = max(subarray_sum, curr);
    }

    ll op = 1;
    for (ll i = 0; i < k; i++) {
        op = (op * 2) % P;
    }
    subarray_sum %= P;
    sum_array = (sum_array % P + P) % P;
    ll total = (sum_array + subarray_sum * op - subarray_sum + P) % P;
    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
