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
lli check(lli n,vi &dp){
	if(n < 0)return 0;
	if(n == 0)return 1;
	
    if(dp[n]!=-1)return dp[n];
    
    
    dp[n] = 0;
    // dp[n] = (check(n-1,dp) % MOD +check(n-2,dp) % MOD +check(n-3,dp) % MOD +check(n-4,dp) % MOD +check(n-5,dp) % MOD +check(n-6,dp) % MOD) % MOD;
    for(lli i = 1; i <= 6; ++i){
        dp[n] += check(n - i, dp)%MOD;
    }
	return dp[n]%MOD;
}
void solve(){
    lli n;cin >> n;
    vi dp(n+1,-1);
    cout << check(n,dp) << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}