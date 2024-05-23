#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l=0;l<t;l++) {
        int n,k;
        cin >> n >> k; 
        cout << min(n,k) << " " << max(n,k) << endl;
    }
    return 0;
}
