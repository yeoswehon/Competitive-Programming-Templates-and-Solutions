#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;
   while (t--){
        vector <int> s;
        string a;
        cin >> a;
        a.push_back('0');
        int count =0, alice =0;
        for (int i =0;i<a.length();i++){
            if (a[i] == '1') count++;
            else{
                s.push_back(count);
                count = 0;
            }
        }
        sort(s.rbegin(),s.rend());
        for (int i =0; i<s.size();i++) {
            if (i%2 == 0) alice += s[i];
        }
        cout << alice << endl;
   }

    return 0;
}
