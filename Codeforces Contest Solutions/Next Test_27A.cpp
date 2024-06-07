#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define read(a,n) for(int i=0;i<n;i++) cin>>a[i];
using namespace std;

void solve() { 
    int n;
    cin >> n;
    vector <bool> arr(3001,false);
    int a;
    for (int i =0;i<n;i++) {
        cin >> a;
        arr[a] = true;
    }
    for (int i =1;i<=3001;i++) {
        if (arr[i] == false) {
            cout << i;
            cout << "\n";
            return;
        }
    }
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    int t = 1;
    // cin >> t;
    //scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
