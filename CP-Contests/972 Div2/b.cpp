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
//     lli n, x;
//     cin >> n >> x;
//     vi v(n);
    
//     fr(i, n) {
//         cin >> v[i];
//     }
    
//     sort(all(v),greater<lli>());
    
//     lli ok = 0;
    
//     while (true) {
//         bool okk = false;
//         lli ans = 0;
        
//         fr(i,n){
//             if (ans < x && v[i] > 0) {
//                 v[i]--;
//                 ans++;
//                 okk = true;
//             }
//         }
//         if (!okk) break;
//         ok++;
//     }
    
//     cout << ok << endl;
// }

void solve() {
    lli n, x;
    cin >> n >> x;
    vi ok(n);  
    for (int i = 0; i < n; i++) {
        cin >> ok[i];
    }
    
    lli ans = 0;
    while (true) {
        vi okk;
        set<lli> bad;  
        
        for (lli j = 0; j < x; j++) {
            lli mp = -1;
            lli m = 0;
            
            for (lli i = 0; i < n; i++) {
                if (bad.count(i) || ok[i] == 0) continue;
                if (ok[i] > m) {
                    mp = i;
                    m = ok[i];
                }
            }
            
            if (mp == -1) break;
            
            bad.insert(mp);
            ok[mp]--;
            
            okk.push_back(mp);
        }
        
        if (okk.empty()) break;
        
        ans++;
    }
    
    cout << ans << endl;
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}