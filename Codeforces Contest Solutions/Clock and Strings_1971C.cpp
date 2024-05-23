#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l=0;l<t;l++) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        string s;
        for (int i = 1; i <= 12 ; i++) {
            if (i == a || i == b) s += 'a';
            if (i == c || i == d) s += 'b';
        }
        cout << (s== "aabb" || s == "bbaa" || s == "abba" || s == "baab" ? "NO\n" : "YES\n");
    }
    return 0;
}
