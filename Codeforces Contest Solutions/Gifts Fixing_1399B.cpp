#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> a(k), b(k);
        int min_a = INT_MAX, min_b = INT_MAX;
        for (int j = 0; j < k; j++) {
            cin >> a[j];
            min_a = min(a[j], min_a);
        }
        for (int j = 0; j < k; j++) {
            cin >> b[j];
            min_b = min(b[j], min_b);
        }
        long long total = 0;
        for (int j = 0; j < k; j++) {
            total += max(a[j] - min_a, b[j] - min_b);
        }
        cout << total << endl; 
    }
    return 0;
}
