#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i];
using namespace std;

void solve() { 
    int n; 
    cin >> n; 
    int a;
    int zero = 0; 
    int five = 0;
    for (int i =0;i<n;i++) {
        cin >> a;
        if (a == 0) zero++;
        else five++;
    }
    int no = (five/9) * 9; // number of fives we need
    if (zero == 0) {
        cout << "-1" << "\n";
        return;
    }
    int sum = no * 5;
    if (sum % 9 != 0) {
        cout << "0" << "\n";
        return;
    }
    if (no == 0) {
        cout << "0" << "\n";
        return;
    }
    for (int i =0;i<no;i++) {
        cout << "5";
    }
    for (int i=0;i<zero;i++) {
        cout << "0";
    }
    cout << "\n";
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
