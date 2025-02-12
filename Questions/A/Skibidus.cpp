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
const lli inf = 9e17;
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
lli findSmallestGreaterOrEqual(const vector<lli> &vec, lli x){
    auto it = std::lower_bound(vec.begin(), vec.end(), x);
    return (it != vec.end()) ? *it : -1;
}
void solve(){
    lli n,m;cin >> n >> m;
    vi v(n),v2(m);fr(i,n)cin >> v[i];fr(i,m)cin >> v2[i];
    sort(all(v2));
    lli prev = LLONG_MIN;
    
    fr(i,n){
        // lli lb = *lower_bound(all(v2),(v[i]+prev));
        lli lb = findSmallestGreaterOrEqual(v2, v[i] + prev);
        // cout << lb << " ";
        // if(lb>v2.back())v[i] = v[i];
        if(lb!=-1){
            if(prev>v[i]) v[i] = lb-v[i];
            else v[i] = min(v[i] , lb - v[i]);
        }
        
        if(v[i] < prev){
            cout << "NO\n";
            return;
        }
        prev = v[i];
    }
    // fr(i, n) {
    //     auto it = lower_bound(all(v2), (v[i] + prev));
        
    //     if (it == v2.end()) { 
    //         cout << "NO\n";
    //         return;
    //     }
        
    //     lli lb = *it;

    //     if (prev > v[i]) 
    //         v[i] = lb - v[i];
    //     else 
    //         v[i] = min(v[i], lb - v[i]);

        

    //     prev = v[i];
    // }

    
    // for(auto x:v)cout << x << " ";
    //     cout << "\n";
    
    // bool ok = true;
    // fr(i,n-1){
    //     if(v[i] > v[i+1]){
    //         ok = false;
    //         break;
    //     }
    // }
    // if(ok)cout << "YES\n";
    // else cout << "NO\n";
    cout << "YES\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}