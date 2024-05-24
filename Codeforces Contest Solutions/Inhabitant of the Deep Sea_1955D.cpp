#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t; // no of test cases
    for (int l=0;l<t;l++){
        ll n,k; // n is no of ships, k is no of attacks
        cin >> n >> k;
        deque <ll> ship(n);
        for (int i =0;i <n;i++){
            cin >> ship[i];
        }
        while (ship.size() > 1 && (k>0)) { // k is non zero in this case
            ll min_no = min(ship.front(),ship.back());
            if (k < 2*min_no) {
                ship.front() -= k/2 + k%2;
                ship.back() -= k/2;
                k = 0;
            }
            else {
                ship.front() -= min_no;
                ship.back() -=min_no;
                k-= 2*min_no;
            }
            if (ship.front() == 0) {
                ship.pop_front();
            }
            if (ship.back() == 0) {
                ship.pop_back();
            }
        }
        ll ans = n - ship.size();
        cout << ans + (ship.front() <= k && ship.size() > 0) << endl;
    }
    return 0;
}
