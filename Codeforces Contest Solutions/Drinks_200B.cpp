#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a[101];
    cin >> n;
    double sum = 0;
    for (int i=0; i<n;i++) {
        cin >> a[i];
        sum += a[i];
    }
    double ans = sum / n;
    cout << ans;
    return 0;
}
