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
 
ll n,q;
vector<ll> tree;
 
void update(vector<ll> &tree,int idx,int val){
    tree[n+idx]=val;
    for (int j=(n+idx)/2;j>=1;j/=2){
        tree[j]=tree[j*2]+tree[j*2+1];
    }
}
 
ll sum(vector<ll> &tree,int left,int right){
    left+=n;
    right+=n;
    ll sum1=0;
    while (left<=right){
        if (left%2){
            sum1+=tree[left];
            left++;
        }
        if (right%2==0){
            sum1+=tree[right];
            right--;
        }
        left/=2;right/=2;
    }
    return sum1;
}
 
void solve() {
    cin>>n>>q;
    tree.resize(2*n,0);
    vector<ll> a(n);read(a);
    for (int i=0;i<n;i++) tree[n+i]=a[i];
    for (int i=n-1;i>=1;i--)tree[i]=tree[i*2]+tree[i*2+1];
    for (int i=0;i<q;i++){
        ll a,b,c;cin>>a>>b>>c;
        b--;
        if (a==1){
            update(tree,b,c);
        }
        else{
            c--;
            cout<<sum(tree,b,c)<<"\n";
        }
 
    }
}
 
int main() {
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);int t = 1;
    while (t--) {
        solve();
    }
    return 0;
