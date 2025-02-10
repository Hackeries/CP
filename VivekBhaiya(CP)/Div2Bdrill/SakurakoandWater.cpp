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
//     vector<vector<lli>>v(n,vector<lli>(n));
//     fr(i,n){
//     	fr(j,n){
//     		cin >> v[i][j];
//     	}
//     }
//     lli cnt = 0;
//     if(n&1){
//         for(lli i =0;i<=n/2;++i){
//         	for(lli j =0;j<=n/2;++j){
//         		if(v[i][j]<0)cnt+=(v[i][j]);
//                 // cout << v[i][j] << " ";
//         	}
//             // cout << "\n";
//         }
//         for(lli i =n/2;i<n;++i){
//         	for(lli j =n/2;j<n;++j){
//         		if(v[i][j]<0)cnt+=v[i][j];
//                 // cout << v[i][j] << " ";
//         	}
//             // cout << "\n";
//         }
//     }else{
//         for(lli i =0;i<n/2;++i){
//             for(lli j =0;j<n/2;++j){
//                 if(v[i][j]<0)cnt+=(v[i][j]);
//                 // cout << v[i][j] << " ";
//             }
//             // cout << "\n";
//         }
//         for(lli i =n/2;i<n;++i){
//             for(lli j =n/2;j<n;++j){
//                 if(v[i][j]<0)cnt+=v[i][j];
//                 // cout << v[i][j] << " ";
//             }
//             // cout << "\n";
//         }
//     }
//     cout << abs(cnt) << "\n";
// }

void solve(){
    lli n;cin >> n;
    vector<vector<lli>>v(n,vector<lli>(n));
    fr(i,n){
        fr(j,n){
            cin >> v[i][j];
        }
    }
    lli cnt = 0;
    fr(i,n){
        lli mini = 0;
        fr(j,n-i){
            mini = min(mini , v[i+j][j]);
        }
        cnt+=(-mini);
    }
    
    for(lli j = 1;j<n;++j){
        lli mini = 0;
        fr(i,n-j){
            mini = min(mini , v[i][i+j]);
        }
        cnt+=(-mini);
    }
    cout << cnt << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}