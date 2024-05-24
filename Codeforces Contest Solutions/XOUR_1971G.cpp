#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    map<ll, priority_queue<ll>> mp;
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]>>2].push(-v[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cout << -mp[v[i]>>2].top() << " ";
        mp[v[i]>>2].pop();
    }
    cout << endl;
}
 
int main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
