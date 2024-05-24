#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector <char> v;
    for (int i =0;i<s.length();i++){
        if (s[i] != '+') v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    int len = v.size()-1;
    for (char a: v) {
        cout << a;
        if (len) cout << "+";
        len--;
    }

    return 0;
}
