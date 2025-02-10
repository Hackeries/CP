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

// void solve(){
//     lli n,k;cin >> n >> k;
//     vi v(n);fr(i,n)cin >> v[i];
//     // k--;
//     sort(all(v));
//     lli ok = accumulate(all(v),0ll);
//     lli sum1 = 0,sum2 = 0;
//     for(lli i =0;i<k*2;++i){
//         sum1+=v[i];
//     }
//     for(lli i = n-1;i>=n-k;--i){
//         sum2+=v[i];
//     }
//     // cout << sum1 << " " << sum2 << "\n";
//     // cout << ok << "\n";
//     cout << ok - min(sum1,sum2) << "\n";
// }

void solve(){
    lli n,k;cin >> n >> k;
    vi v(n);fr(i,n)cin >> v[i];
    sort(all(v));
    // k--;
    lli sum = accumulate(all(v),0ll);
    lli i = 0,j = n-1;
    while(k--){
        sum-=v[i]+v[i+1];
        i+=2;
    }
    lli ans = sum;
    i-=2;
    while(i>=0){
        sum+=v[i]+v[i+1];
        sum-=v[j];
        i-=2;
        j-=1;
        ans = max(ans,sum);
    }
    cout << ans << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}