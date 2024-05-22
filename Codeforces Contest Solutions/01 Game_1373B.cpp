#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        int zero =0,one=0;
        for (auto a:s) {
            if (a=='0') zero++;
            else one++;
        }
        int ans = min(zero,one);
        if (ans%2 == 0) cout << "NET"; // a mod 2 == 1 means alice wins
        else cout << "DA";
        printf("\n");
    }
    return 0;
}
