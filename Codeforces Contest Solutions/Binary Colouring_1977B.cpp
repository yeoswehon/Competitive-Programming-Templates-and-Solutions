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
    ll n;
    cin >> n;
    vi checker(31,0);
    for (int i =0;i< 30;i++) {
        if (1ll & (n >> i)) { // checking rightmost bit
            if (checker[i]) {
                checker[i+1] = 1;
                checker[i] = 0;
            }
            else if (i > 0){
                if (checker[i-1] == 1) {
                    checker[i-1] = -1;
                    checker[i] = 0;
                    checker[i+1] = 1;
                }
                else {
                    checker[i] = 1;
                }
            }
            else {
                checker[i] = 1;
            }
        }
    }
    cout << 31 << "\n";
    for (int i =0;i <= 30;i++) {
        cout << checker[i] << ' ';
    }
    cout << "\n";

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
