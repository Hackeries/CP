
#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
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
const int MOD = 1e9 + 7;
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
//     lli n, s, m;
//     cin >> n >> s >> m;

//     vector<lli> start(n), end(n);
//     for (lli i = 0; i < n; ++i) {
//         cin >> start[i] >> end[i];
//     }
//     if (start[0] >= s) {
//         cout << "YES\n";
//         return;
//     }
//     for (lli i = 1; i < n; ++i) {
//         if (start[i] - end[i - 1] >= s) {
//             cout << "YES\n";
//             return;
//         }
//     }
//     if (m - end[n - 1] >= s) {
//         cout << "YES\n";
//         return;
//     }

//     cout << "NO\n";
// }

void solve(){
    lli n,s,m;cin >> n >> s >>m;
    vpii v(n);
    fr(i,n){
        lli l,r;
        cin >> l >> r;
        v[i] = {l,r};
    }
    
    if(v[0].first >= s){
        cout << "YES\n";
        return;
    }
    
    for(lli i = 1;i<n;++i){
        if((v[i].first - v[i-1].second) >= s){
            cout << "YES\n";
            return;
        }else if(m-(v[n-1].second)>=s){
            cout << "YES\n";
            return;
        }else{
            cout << "NO\n";
            return;
        }
    }
}

signed main() {
    fastIO;
    lli t;
    cin >> t;

    while (t--) {
        solve();
    }
}