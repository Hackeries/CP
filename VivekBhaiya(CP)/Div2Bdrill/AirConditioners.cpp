#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli,lli>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vector<lli> (m))
#define vpii vector<pair<lli,lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const lli MOD = 1e9 + 7;
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    lli n,k;cin >> n >> k;
    vi v(k);fr(i,k)cin >> v[i]; //pos of AC
    vi v2(k);fr(i,k)cin >> v2[i]; // temp of AC
    vi ok(n,1e18);
    vi okk(n,1e18);
    fr(i,k){
        ok[v[i]-1] = v2[i];
    }
    
    for(lli i = 1; i < n; ++i){
        ok[i] = min(ok[i], ok[i - 1] + 1);
    }
    
    okk = ok;
    
    for(lli i = n -2;i >= 0;--i) {
        okk[i] = min(okk[i], okk[i + 1] + 1);
    }
    
    vi ans;
    fr(i,n){
        ans.pb(min(ok[i],okk[i]));
    }
    for(auto x:ans)cout << x << " ";
        cout << "\n";
    
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}