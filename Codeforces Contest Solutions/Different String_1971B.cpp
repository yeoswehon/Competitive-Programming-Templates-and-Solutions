#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l=0;l<t;l++) {
        string a;
        cin >> a;
        bool flag = false; // true means can swap?
        for (int i =1;i<a.length();i++) {
            if (a[i] != a[0]) {swap(a[i],a[0]);flag = true;break;};
        }
        if (flag) {
            cout << "YES" << endl;
            cout << a << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
