#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n,f,k; // the number of cubes, index of Dmitry's favourite cube, the number of removed cubes
    cin >> n >> f >> k;
    // second line contains n integers (values shown on the cubes)
    vector <int> cubes(n);
    for (int i =0;i<n;i++){
        cin >> cubes[i];
    }
    int fav_cube = cubes[f-1];
    sort(cubes.rbegin(),cubes.rend());
    int fav_count = count(cubes.begin(),cubes.begin()+k,fav_cube);
    int fav_repeat = count(cubes.begin(),cubes.end(),fav_cube);
    if (n == k) cout << "YES\n";
    else if (fav_count == 0) cout << "NO\n";
    else if (fav_repeat == fav_count) cout << "YES\n";
    else cout << "MAYBE\n";
}

int main() {
    // ios::sync_with_stdio(false);
    int t = 1;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
