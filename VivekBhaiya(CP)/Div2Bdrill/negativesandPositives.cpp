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
//     lli n;cin >> n;
//     vi v(n);lli tsum = 0;fr(i,n)cin >> v[i];
//     vi pos,neg;
//     fr(i,n){
//     	if(v[i]<=0){
//     		neg.pb(v[i]);
//     	}else{
//     		pos.pb(v[i]);
//     	}
//     }
//     sort(all(neg),greater<lli>());
//     lli cnt = 0;
//     if(neg.size() > 0 && neg.size()&1){
//         if(neg[0] == 0){
//             for(lli i=2;i<neg.size();++i){
//                 cnt+=abs(neg[i]);            
//             }
//             cnt-=abs(neg[1]);
//         }else{
//             for(lli i=1;i<neg.size();++i){
//                 cnt+=abs(neg[i]);            
//             }
//             cnt-=abs(neg[0]);
//         }
//     }else{
//         fr(i,neg.size()){
//             cnt+=abs(neg[i]);
//         }
//     }
    
//     lli ans = 0;
//     fr(i,pos.size()){
//         ans+=pos[i];
//     }
    
//     if(neg.size() == 1){
//         lli tem = *min_element(all(pos));
//         cout << ans + neg[0] - (2*tem) << "\n";
//         return;
//     }
//     cout << ans + cnt << "\n";
// }

void solve(){
    lli n;cin >> n;
    vi v(n);fr(i,n)cin >> v[i];
    lli sum = 0;
    sort(all(v));
    lli neg = 0;
    fr(i,n){
        if(v[i] < 0)neg++;
        v[i] = abs(v[i]);
        sum+=v[i];
    }
    if(neg&1){
        if(v[0] == 0){
            cout << sum-v[1] << "\n";
        }else{
            cout << sum-v[0] << "\n";
        }
    }else{
        cout << sum << "\n";
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