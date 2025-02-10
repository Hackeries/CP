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
lli checkMemo(vi &v,lli x,vi &dp){

    // base case
    if(x == 0)return 0;
    if(x < 0)return INT_MAX;
    
    if(dp[x]!=INT_MAX)return dp[x];
    
    lli mini = INT_MAX;
    for(lli i=0;i<v.size();++i){
        if(x>=v[i]){
            lli ans = checkMemo(v,x-v[i],dp);
            if(ans!=INT_MAX){
                mini = min(mini,1+ans);
            }
        }
    }
    return dp[x] = mini;
}
lli checkTabulation(vi &v,lli x){
    vi dp(x+1,INT_MAX);
    dp[0] = 0;
    for(lli i=1;i<=x;++i){
        lli mini = INT_MAX;
        for(lli j=0;j<v.size();++j){
            if(i>=v[j]){
                lli ans = dp[i-v[j]];
                if(ans!=INT_MAX){
                    mini = min(mini,1+ans);
                }
            }
        }
        dp[i] = mini;
    }
    return dp[x];
}
void solve(){
    lli n,x;cin >> n >> x;
    vi v(n);fr(i,n)cin >> v[i];
    vi dp(x+1,INT_MAX);
    lli ans = checkTabulation(v,x);
    // lli ans = checkMemo(v,x,dp);
    cout << (ans == INT_MAX?-1:ans) << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}