#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n; 
    for (int t = 0; t < n; t++) { 
        map<ll, ll> mp;
        int k; 
        cin >> k;
        ll repeat = 1;
        ll unique = 0;
        for (int i = 0; i < k; i++) {
            ll skill;
            cin >> skill;
            mp[skill]++;
        }
        for (const auto &[key, value] : mp) {
            unique++;
            repeat = max(repeat, (ll)value);
        }
        if (repeat > unique) {
            cout << unique << endl;
        } else if (repeat == unique) {
            cout << repeat - 1 << endl;
        } else {
            cout << repeat << endl;
        }
    }
    
    return 0;
}
