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
lli inverse(lli x){return (x,(MOD-2));}
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
    lli n;cin >> n;
    // vector<vector<lli>>v(5,vector<lli>(4));
    // lli k = 0;
    // fr(i,5){
    //     fr(j,4){
    //         // cout << k << " ";
    //         v[i][j] = k;
    //         ++k;
    //     }
    // }
    // fr(i,5) {
    //     if (i&1) {
    //         reverse(all(v[i]));
    //     }
    //     fr(j,4) {
    //         if(v[i][j] == n)
    //         cout << i << " " << j << "\n";
    //     }
    // }

    lli row = n / 4;
    lli column = n % 4;

    if (row&1) {
        column = 4 - 1 - column;
    }

    cout << row << " " << column << endl;
}

signed main(){
    
    fastIO;
    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}