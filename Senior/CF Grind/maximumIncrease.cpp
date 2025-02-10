#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vov vector<vector<int>>v(n,vector<int> (m))
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;

void solve(){
    lli n; cin >> n;
    vector<lli> v(n);
    fr(i,n) cin >> v[i];
    
    lli max_length = 1;
    lli current_length = 1;

    fr(i, n-1) {
        if (v[i] < v[i+1]) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
        }
    }
    max_length = max(max_length, current_length);
    cout << max_length << "\n";
}

signed main(){
	
    fastIO;
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}