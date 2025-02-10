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
    lli n;cin >> n;
    vi v(n);fr(i,n)cin >> v[i];
    
    // for(lli i =2;i<n-1;++i){
    // 	if(v[i-1] > v[i] && v[i+1] < v[i]){
    // 		v[i+1]++;v[i-1]--;
    // 	}else if(v[i-1] < v[i] && v[i+1] > v[i]){
    // 		v[i+1]--;v[i-1]++;
    // 	}
    // }
    // bool ok = false;
    // for(lli i = 0;i<n;++i){
    // 	if(v[i]!=v[i+1])break;
    // 	else ok = true;
    // }
    // if(ok)cout << "YES\n";
    // else cout << "NO\n";
    // set<lli>s(all(v));
    lli sum = accumulate(v.begin(), v.end(), 0LL);
    if (sum % n != 0) {
        cout << "NO\n";
        return;
    }
    lli target = sum / n;
    lli oddSum = 0, evenSum = 0;
    lli p = (n+1)/2,q = n/2;
    for (lli i = 0; i < n; i++) {
        if ((i+1) & 1) {
            oddSum += v[i];
        } else {
            evenSum += v[i];
        }
    }
    if (oddSum == p*target && evenSum == q*target)cout << "YES\n";
    else cout << "NO\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}