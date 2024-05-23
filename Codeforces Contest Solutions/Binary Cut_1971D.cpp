#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        int ans = 0;
        string s;
        cin >> s;
        bool has_01 = false;
        char prev = s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != prev) {
                ans++;
                if (s[i - 1] == '0' && s[i] == '1') {
                    has_01 = true;
                }
                prev = s[i];
            }
        }
        cout << ans + 1 - (has_01 ? 1 : 0) << endl;
    }
    return 0;
}
