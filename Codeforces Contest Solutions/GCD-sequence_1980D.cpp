#include <bits/stdc++.h>
#define ll long long
using namespace std;
// kekkekekekekekekekke
int gcd(int a, int b) { // basic euclidean algorithm
    if (a == 0) return b;
    return gcd(b%a,a);
}
void solve() {
    int n;
    cin >> n; // no of elements
    vector<int> asd(n);
    vector<int> gcdneighbour;
    for (int i = 0; i < n; i++) {
        cin >> asd[i];
    }
    // count the GCD of each neighbouring pair of numbers to get a new array b
    for (int i = 0; i < n - 1; i++) {
        gcdneighbour.push_back(gcd(asd[i], asd[i + 1]));
    }
    int problem = -123; // perhaps this index can chng?
    for (int i = 0; i < n - 2; i++) {
        if (gcdneighbour[i] > gcdneighbour[i + 1]) {
            problem = i;
            break;
        }
    }
    if (problem == -123) {
        cout << "YES\n";
        return;
    }
    vector<int> temp1,temp2,temp3,newtemp1,newtemp2,newtemp3;
    for (int i = 0; i < n; i++) {
        if (i != problem)  temp1.push_back(asd[i]);
        if (i != problem + 1) temp2.push_back(asd[i]);
        if (i != problem + 2) temp3.push_back(asd[i]);
    }
    for (int i = 0; i < n - 2; i++) {
        newtemp1.push_back(gcd(temp1[i], temp1[i + 1]));
        newtemp2.push_back(gcd(temp2[i], temp2[i + 1]));
        newtemp3.push_back(gcd(temp3[i], temp3[i + 1]));
    }
    bool flag1 = true, flag2 = true, flag3 = true;
    for (int i = 0; i < n - 3; i++) {
        if (newtemp1[i] > newtemp1[i + 1]) {
            flag1 = false;
        }
        if (newtemp2[i] > newtemp2[i + 1]) {
            flag2 = false;
        }
        if (newtemp3[i] > newtemp3[i + 1]) {
            flag3 = false;
        }
    }
    
    if (!(flag1 || flag2 || flag3)) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    //ios::sync_with_stdio(false);
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
