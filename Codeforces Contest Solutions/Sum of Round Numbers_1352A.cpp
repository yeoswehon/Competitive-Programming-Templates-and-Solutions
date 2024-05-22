#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        vector <int> v;
        int n;
        cin >> n;
        int p = 1;
        while (n > 0) {
            if (n % 10 != 0) (v.push_back((n % 10)*p));
            n /= 10;
            p*=10;
        }
        cout << v.size() << endl;
        for(int val:v) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
