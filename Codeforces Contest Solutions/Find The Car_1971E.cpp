#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) {
        // point 0 to point n
        int n,k,q; // n = final destination, k = the number of points timur knows the time for, q = number of queries
        // a is the distance, b is the minutes
        // input is 
        cin >> n >> k >> q;
        vector <ll> dist(k+1),time(k+1);
        dist[0] = 0, time[0] = 0;
        for (int i =1; i < k+1; i++) { // 2nd line of input which is the point
            cin >> dist[i];
        }
        for (int i =1; i < k+1; i++) { // 3rd line of input which is the minutes
            cin >> time[i];
        }
        for (int i =0; i < q; i++) { // 4th line of input time taken n there r q lines
            ll a;
            cin >> a;
            int left = 0, right = k;
                while (left <= right) {
                    int mid = left + (right - left) / 2;
                    if (dist[mid] > a) right = mid - 1;
                    else left = mid + 1;
                }
                if (dist[right] == a) {cout << time[right] << " "; continue;}
                ll ans = time[right] + (a-dist[right])*(time[right+1]-time[right])/(dist[right+1]-dist[right]);
                cout << ans << " ";
        }
        cout << endl;
        }
        return 0;
    }
