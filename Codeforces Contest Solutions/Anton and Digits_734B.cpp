#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d; // 256 and 32
    int s = min({a,c,d});
    a -= s;
    int e = min({a,b});
    int ans = s*256 + e*32;
    cout << ans;
    return 0;
}
