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

void solve(){
    lli n,k;cin >> n >> k;
    vi v(n);fr(i,n)cin >> v[i];
    set<lli>s2(all(v));
    
    if(k == 0){
        cout << n << "\n";
        return;
    }
    // lli x = s2.size()+1*(s2.size()+2)/2;
    // lli ok = accumulate(all(s2),0ll);
    // lli mex = abs(x-ok);
    // if(mex == 0 && s2.find(mex)!=s2.end())mex = s2.size()+1;
    lli mex = 0;
    while(s2.find(mex) != s2.end())mex++;

    lli max = *max_element(all(s2));
    lli sum = (mex + max + 1)/2;
    if(mex>max){
        cout << k + s2.size() << "\n";
    }else{
        s2.insert(sum);
        cout << s2.size() << "\n";
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