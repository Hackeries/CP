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
    vector<lli>a(n);
    vector<lli>b(n+1);
    
    
    fr(i,n){
        cin >> a[i];
    }
    
    fr(i,n+1){
        cin >> b[i];
    }
    
    
    lli a1 = *max_element(a.begin(),a.end());
    a.push_back(a1);
    
    
    lli sum = 1,ext = 1e18;
    for(lli i = 0;i<n;++i){
        sum += abs(a[i] - b[i]);
        ext = min(ext, abs(a[i] - b[n]));
        ext = min(ext, abs(b[i] - b[n]));
        if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
        ext = 0;
    }
    cout << sum+ext << "\n";
}

signed main(){
    
    fastIO;
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}