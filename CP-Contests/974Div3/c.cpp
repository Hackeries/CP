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
const lli MOD = 1e9 + 7;
const lli INF = 1e18;
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

bool isok(lli n, vi &v , lli tsum , lli av){
    vi v2 = v;
    v2[n-1]+=av;
    lli okk = tsum + av;
    double newavg = okk / (2.0*n);
    lli cnt = 0;
    fr(i,n){
        if(newavg > v2[i])cnt++;
    }
    return cnt > n/2;
}
lli check(lli n,vi &v , lli tsum){
    lli l = 0,r = INF , ba = -1;
    while(l<=r){
        lli mid = l + (r-l)/2;
        if(isok(n,v,tsum,mid)){
            ba = mid;
            r = mid-1;
        }else{
            l = mid + 1;
        }
    }
    return ba;
}
void solve(){
    lli n;cin >> n;
    lli tsum = 0;
    vi v(n);
    fr(i,n){
        cin >> v[i];
        tsum+=v[i];
    }
    if(n == 1 || n == 2){
        cout << -1 << "\n";
        return;
    }
    sort(all(v));
    lli cba = 0;
    lli ok = check(n,v,tsum);
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