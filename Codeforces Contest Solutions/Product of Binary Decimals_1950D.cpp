#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int MEME = 100009;
vector <int> binary_decimals;

bool check(int n){
    if (n==1) return true;
    bool ans = false;
    for (int a:binary_decimals) {
        if (n % a == 0) {
            ans |= check(n/a);
        }
    }
    return ans;
}
void solve() {
    int n;
    cin >> n;
    cout << (check(n) ? "YES\n" : "NO\n");
}
int main() {
    //ios::sync_with_stdio(false);
    for (int i = 2; i < MEME; i++){
        int curr = i;
        bool flag = false;
        while (curr) {
            if (curr % 10 > 1) {flag = true; break;}
            curr /= 10;
        }
        if (!flag) binary_decimals.pb(i);
    }
    int t = 1;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
