#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // no of test cases
    for (int i=0;i<t;i++){
        int a,b,c;
        cin >> a >> b >> c; // a = size, b is vertical increase d is horizontal increase
        vector <int> v(a*a);
        for (int j = 0; j < a * a; ++j) {
            cin >> v[j];
        }
        sort(v.begin(),v.end());
        vector <int> v2(a*a);
        v2[0] = v[0];
        for (int j = 1;j<a;j++) {
            v2[j] = v2[j-1] + b;
        }
        for (int j = 1;j<a;j++) {
            for (int k=0;k<a;k++){
                v2[j*a+k] = v2[(j-1)*a+k] + c;
            }
        }
        sort(v2.begin(),v2.end());
        cout << (v == v2 ? "YES" : "NO") << endl;
    }
    return 0;
}
