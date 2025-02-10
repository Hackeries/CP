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

// void solve() {
//     lli n, l, r;cin >> n >> l >> r;
//     vi a(n);fr(i,n)cin >> a[i];
//     l--;r--;
//     lli len = r - l + 1;
//     // lli sum = 0;
//     // for(lli i = 0;i<=ok;++i){
//     //  sum+=v[i];
//     // }
//     vi seg;
//     for(auto x:a){
//         seg.pb(x);
//     }
//     sort(all(a));
//     lli segsum = accumulate(seg.begin(), seg.end(), 0LL);
//     lli minSum = accumulate(a.begin(), a.begin() + len, 0LL);
//     cout << min(segsum, minSum) << "\n";
// }
void solve() {
    lli n, l, r;
    cin >> n >> l >> r;
    l--;r--;
    vi a(n);fr(i,n)cin >> a[i];
    lli k = r - l + 1;
    vi prefix(a.begin(), a.begin() + r+1);
    sort(all(prefix));
    lli prefix_sum = accumulate(prefix.begin(), prefix.begin() + k, 0LL);
    vi suffix(a.begin() + l, a.end());
    sort(all(suffix));
    lli suffix_sum = accumulate(suffix.begin(), suffix.begin() + k, 0LL);
    
    // cout << prefix_sum << " " << suffix_sum << "\n";
    cout << min(prefix_sum, suffix_sum) << "\n";
}


signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}