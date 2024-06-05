#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b) // euclidean algorithm
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) { // a * b = lcm(a,b) * gcd(a,b)
    return (a / gcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    set <int> val;
    for (int i =0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<int>()); // sort in descending order
    for (int i =0;i<n;i++) val.insert(a[i]);
    int temp = 1;
    for (int i =0;i<n;i++) temp = lcm(temp,a[i]);
    if (temp != a[0]) {
        cout << n << "\n";
        return;
    } 
    // if lcm > max
    // if lcm = max i get all the factors of the largest number
    vector <int> factors_of_max; // factors of the maximum number
    for (int i =1; i*i <= a[0];++i) {
        if (a[0] % i == 0) {
            factors_of_max.push_back(i);
            factors_of_max.push_back(a[0]/i);
        }
    }
    int max_length = 0;
    int m = factors_of_max.size();
    for (int i =0; i<m;i++) {
        int curr = 0; int l = 1;
        if (val.find(factors_of_max[i]) == val.end()) {
            for (int j=0;j<n;j++) {
                if (factors_of_max[i] % a[j] == 0) {
                    curr++;
                    l = lcm(l,a[j]);
                }
            }
            if (l == factors_of_max[i]) max_length = max(curr,max_length);
        }
    }
    cout << max_length << "\n";
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
