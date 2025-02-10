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
// lli check(lli n ,vi &v , vi &v2 , vi &v3 , lli index){
//     if(index>=n)return 0;
    
//     lli maxi = -1,sum = 0;
//     lli op = v[index] + check(n,v,v2,v3,index+1);
//     lli op2 = v2[index] + check(n,v,v2,v3,index+1);
//     lli op3 = v3[index] + check(n,v,v2,v3,index+1);
    
    // sum = op+op2+op3;
    
    // maxi = max(maxi,sum);
    // return maxi;
// }

// void solve(){
// 	lli n;cin >> n;
//     vi v(n);fr(i,n)cin >> v[i];
//     vi v2(n);fr(i,n)cin >> v2[i];
//     vi v3(n);fr(i,n)cin >> v3[i];
    
//     cout << check(n,v,v2,v3,0) << "\n";
    
    
    // vector<vi>v(3,vi(n));
    // fr(i,3){
    // 	fr(j,n){
    // 		cin >> v[i][j];
    // 	}
    // }
    
    // lli sum = 0;
    // fr(i,3){
    //     lli maxi = -1;
    //     fr(j,n){
            
    //     }
    // }
    
// }
lli check(lli n, vi &v, vi &v2, vi &v3, lli index, lli mask , vector<vi> &dp) {
    if (mask == 7) return 0;
    if (index >= n) return LLONG_MIN;
    
    
    if (dp[index][mask] != -1) return dp[index][mask];
    
    lli skip = check(n, v, v2, v3, index + 1, mask,dp);
    lli ski = LLONG_MIN;
    if ((mask & 1) == 0) 
        ski = v[index] + check(n, v, v2, v3, index + 1, mask | 1,dp);

    lli movie = LLONG_MIN;
    if ((mask & 2) == 0) 
        movie = v2[index] + check(n, v, v2, v3, index + 1, mask | 2,dp);

    lli board = LLONG_MIN;
    if ((mask & 4) == 0) 
        board = v3[index] + check(n, v, v2, v3, index + 1, mask | 4,dp);

    return dp[index][mask] = max({skip, ski, movie, board});
}

void solve() {
    lli n;
    cin >> n;

    vi v(n), v2(n), v3(n);
    for (lli i = 0; i < n; ++i) cin >> v[i];
    for (lli i = 0; i < n; ++i) cin >> v2[i];
    for (lli i = 0; i < n; ++i) cin >> v3[i];
        
    vector<vector<lli>> dp(n + 1, vector<lli>(8, -1));
    cout << check(n, v, v2, v3, 0, 0,dp) << "\n";
}


signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}