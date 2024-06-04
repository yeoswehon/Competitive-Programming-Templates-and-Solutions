#include <bits/stdc++.h>
#define YSHLOL {ios_base::sync_with_stdio(0); cin.tie(0);}
#define ll long long
#define pb push_back
#define vvi vector<vector<int>>
#define vi vector<int>
#define pii pair<int,int>
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i];
using namespace std;

void solve() {
    ll a; 
    cin >> a; // size of array
    vector<ll> original(a), found(a); // check if this is Sofia array (found array)
    read(original, a);
    read(found, a);
    ll m; 
    cin >> m; // number of modification operations
    // m integers (preserved value for each modification operation)
    vector<ll> operations(m); 
    read(operations, m);
    if (find(found.begin(),found.end(),operations[m-1]) == found.end()) {
        cout << "NO\n";
        return;
    }
    map<int, int> diff;
    for (int i = 0; i < m; i++) 
        diff[operations[i]]++;
    for (int i = 0; i < a; i++) {
        if (original[i] != found[i]) {
            if (diff[found[i]] == 0) {
                cout << "NO\n";
                return;
            }
            diff[found[i]]--;
        }
    }
    cout << "YES\n";
    return;
}

int main() {
    YSHLOL;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
