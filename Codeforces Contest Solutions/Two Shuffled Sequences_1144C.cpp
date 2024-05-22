#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> val(n), ascending, descending;
    vector<int> count(200001, 0);
    int max_count = 0;
    for (int i = 0; i < n; i++) {
        cin >> val[i];
        count[val[i]]++; 
        max_count = max(max_count, count[val[i]]);
    }
    sort(val.begin(), val.end()); 
    if (max_count >= 3) {
        cout << "NO" << endl;
    } else {
        if (n == 1) {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << val[0] << endl;
            cout << 0 << endl;
        } else if (n == 2) {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << val[0] << endl;
            cout << 1 << endl;
            cout << val[1] << endl;
        } else if (n == 3) {
            cout << "YES" << endl;
            cout << 1 << endl;
            cout << val[1] << endl;
            cout << 2 << endl;
            cout << val[2] << " " << val[0] << endl;
        } else {
            cout << "YES" << endl;
            for (int i = 0; i <n; i++) {
                if (val[i] == val[i + 1] && i < n-1) {
                    ascending.push_back(val[i]);
                    descending.push_back(val[i]);
                    i++;
                } else {
                    ascending.push_back(val[i]);
                }
            }
            sort(descending.rbegin(), descending.rend());
            cout << ascending.size() << endl;
            for (int x : ascending) {
                cout << x << " ";
            }
            cout << endl;
            cout << descending.size() << endl;
            for (int x : descending) {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
