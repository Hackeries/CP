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
//     vi ok,okk;
//     lli tsum = 0;
//     for(lli i=0;i<n;++i){
//         if(v[i] == 1)ok.pb(i);
//         tsum+=v[i];
//     }
    
//     for(lli i=0;i<n;++i){
//         if(v[i] == 1)okk.pb(n-i-1);
//     }
    
//     if(tsum<k){
//         cout << -1 << "\n";
//         return;
//     }
//     if(tsum == k){
//         cout << 0 << "\n";
//         return;
//     }
//     if(tsum == n){
//         cout << n-k << "\n";
//         return;
//     }
//     lli op = 0, sok = 0, sokk = 0;
//     while (tsum > k) {
//         if (ok[sok] == okk[sokk]) {
//             if (tsum - k >= 2) {
//                 tsum -= 2;
//                 op += 2;
//             } else {
//                 tsum -= 1;
//                 op += 1;
//             }
//             sok++;
//             sokk++;
//         } else {
//             if (ok[sok] < okk[sokk]) {
//                 op += (ok[sok] - sok + 1);
//                 tsum--;
//                 sok++;
//             } else {
//                 op += (okk[sokk] - sokk + 1);
//                 tsum--;
//                 sokk++;
//             }
//         }
//     }
//     cout << op << "\n";
// }

void solve() {
    lli n, s;
    cin >> n >> s;
    vector<lli> v(n);
    
    for (lli i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    lli totalSum = accumulate(v.begin(), v.end(), 0LL);
    
    if (totalSum < s) {
        cout << -1 << "\n";
        return;
    }
    if (totalSum == s) {
        cout << 0 << "\n";
        return;
    }
    
    lli start = 0, end = 0, currSum = 0, minOps = n + 1;
    
    while (end < n) {
        currSum += v[end];
        
        while (currSum > s) {
            currSum -= v[start];
            start++;
        }
        
        if (currSum == s) {
            minOps = min(minOps, n - (end - start + 1));
        }
        
        end++;
    }
    
    if (minOps == n + 1) {
        cout << -1 << "\n";
    } else {
        cout << minOps << "\n";
    }
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}