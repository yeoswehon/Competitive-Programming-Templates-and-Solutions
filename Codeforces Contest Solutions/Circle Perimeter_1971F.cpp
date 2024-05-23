#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long r;
        cin >> r;
        long long height = r;
        long long ans = 0;
        for (long long i =0; i <= r;i++) {
            while (i*i + height*height >= (r+1)* (r+1)) {
                height --;
            }
            long long temp = height;
            while (temp > 0 && i*i + temp*temp >= r*r) {
                temp--;
                ans++;
            }
        }
        cout << ans*4 << endl;
    }
    return 0;
}
