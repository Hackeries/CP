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

lli check(string &a , string &b , string &c , lli i , lli j,vector<vector<lli>>&dp){
	if(i>=a.size() && j>=b.size())return 0;
	
	if(dp[i][j]!=-1)return dp[i][j];
	
	lli pos = i+j;
	lli res = INT_MAX;
	if(i<a.size()){
		lli ok = (a[i]!=c[pos]) + check(a,b,c,i+1,j,dp);
		res = min(res,ok);
	}
	if(j<b.size()){
		lli ok = (b[j]!=c[pos]) + check(a,b,c,i,j+1,dp);
		res = min(res,ok);
	}
	return dp[i][j] = res;
}
void solve(){
    string a,b,c;cin >> a >> b >> c;
    lli n = a.size(),m = b.size();
    vector<vector<lli>>dp(n+1,vector<lli>(m+1,-1));
    cout << check(a,b,c,0,0,dp) << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}