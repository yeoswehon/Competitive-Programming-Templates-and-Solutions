#include <bits/stdc++.h>
#define ll long long
#define pb emplace_back
#define ff first
#define ss second
#define mp make_pair
#define vvs vector<vector<string>>
#define vs vector<string>
#define vvi vector<vector<int>>
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
#define read(a) for(auto&b:a) cin>>b;
#define rep(i,a,b) for (int i=a;i<b;i++)
#define rep2(i,a,b) for(int i=a;i>=b;i--)
#define rep3(i,a,b) for(int i=a;i<=b;i++)
#define SUM(a) accumulate((a).begin(),(a).end(),0LL)
#define SORT(a) sort(a.begin(),a.end())
#define sz size()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define anslol cout << ans << "\n"
#define all(x) x.begin(),x.end()
#define newline cout<<"\n"
// freopen("input.txt", "r", stdin); // freopen("output.txt", "w", stdout);
using namespace std;
 
const ll INF = 1e9+7;
const int LOG=18;
int min_q[200000][LOG];
int query(int l,int r){
    // int k = 31- __builtin_clz(length) ugly trick haha lel
    // another ugly math trick log[1]=0; recurrence relation log[i]=log[i/2]+1;
    int length = r-l+1;
    int k=0;
    while ((1<<(k+1)) <=length){
        k++;
    }
    return min(min_q[l][k],min_q[r-(1<<k)+1][k]);
}
 
void solve() {
    int n,q;cin>>n>>q;
    vi a(n);read(a);
    for (int i=0;i<n;i++) min_q[i][0]=a[i];
    for (int k=1;k<LOG;k++){
        for (int i=0; i+(1<<k)-1<n;i++){ // ugly math trick
            min_q[i][k]=min(min_q[i][k-1],min_q[i+(1<<(k-1))][k-1]);
        } 
    }
    while (q--){
        int l,r;cin>>l>>r;
        cout<<query(l-1,r-1)<<"\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);int t = 1;
    while (t--) {
        solve();
    }
    return 0;
