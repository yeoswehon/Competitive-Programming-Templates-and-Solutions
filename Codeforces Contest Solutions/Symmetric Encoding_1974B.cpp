#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector <char> v;
        for (int i=0;i<n;i++) v.push_back(s[i]);
        sort(v.begin(),v.end());
        v.resize(unique(v.begin(),v.end())-v.begin()); // unique returns an iterator just past the last unique element, so subtracting v.begin() give no of elements
        int sz = v.size()-1;
        for (int i =0; i < s.length();i++){
            int idx = lower_bound(v.begin(),v.end(),s[i]) - v.begin(); // Lower bound returns the iterator as well
            s[i] = v[sz - idx];
        }
        cout << s << endl;
    }
    return 0;
}
