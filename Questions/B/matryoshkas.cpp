#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli,lli>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vi (m))
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
//     lli n;cin >> n;
//     vi v(n);fr(i,n)cin >> v[i];
//     sort(all(v));
//     set<lli>s;
//     multiset<lli>st;
//     s.insert(v[0]);
//     lli cnt = 1;
//     for(lli i =1;i<n;++i){
//         if(v[i] - v[i-1]==1){
//             s.insert(v[i]);
//         }
//     }
//     for(lli i =1;i<n;++i){
//         if(v[i] - v[i-1]==0){
//             st.insert(v[i]);
//         }
//     }
    
//     for(auto x:s)cout << x << " ";
//         cout << "\n";
//     for(auto x:st)cout << x << " ";
//         cout << "\n";
    
//     cout << "\n";
// }
void solve(){
    lli n;cin >> n;
    vi v(n);fr(i,n)cin >> v[i];
    map<lli,lli>mp;
    for(auto x:v)mp[x]++;
    
    lli ok = 0;
    for(auto x:mp){
        if(mp.count(x.first-1)){
            if(mp[x.first-1] < mp[x.first]){
                ok+=mp[x.first] - mp[x.first-1];
            }
        }
        else ok+=mp[x.first];
    }
    cout << ok << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}