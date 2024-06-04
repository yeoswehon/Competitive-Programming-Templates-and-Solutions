#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b; // a is the number of problems, b is the number of rounds
    string c;
    cin >> c;
    unordered_map<char, int> diff_count;
    for (char letter : c) {
        diff_count[letter]++;
    }
    int additional_problems = 0;
    string required_difficulty = "ABCDEFG";
    for (char level : required_difficulty) {
        if (diff_count[level] < b) {
            additional_problems += (b - diff_count[level]);
        }
    }
    cout << additional_problems << endl;
}

int main() {
    // ios::sync_with_stdio(false);
    int t = 1;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}
