#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum % 2 != 0) {
            cout << -1 << endl; 
            continue;
        }
        int count = 0;
        priority_queue<int> p;
        p.push(a); p.push(b); p.push(c);
        while (true) {
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();
            if (b == 0) {
                break;
            }
            p.push(a - 1);
            p.push(b - 1);
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
