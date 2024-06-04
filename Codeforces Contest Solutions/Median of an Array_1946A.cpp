#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    int median_pos = (n + 1)/2 -1;
    int median_count = count(arr.begin()+median_pos,arr.end(),arr[median_pos]);
    cout << median_count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    //scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
