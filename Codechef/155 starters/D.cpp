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

vi okk(lli ok) {
    vi x;
    vector<bool> y(ok + 1, true);

    for(lli p = 2; p <= ok; p++){
        if(y[p]){
            x.push_back(p);
            for(lli i = p * p; i <= ok; i += p){
                y[i] = false;
            }
        }
    }
    return x;
}

void solve(){
    lli n, m;cin >> n >> m;

    vi x = okk(10010);
    vov;

    // fr(i,n){
    //     fr(j,m){
    //         // v[i][j] = (x[i] *x[n+j+1]);
    //         if(n == m){
    //             if(i == j)v[i][j] = 3;
    //             else v[i][j] = 2;
    //         }
    //         // else{
    //         //     if(i == j)v[i][j] = 3;
    //         //     else v[i][j] = 2;
                
    //         //     if(n&1 && m&1){
    //         //         v[n-1][m-1] = 3;
    //         //         v[n-2][m-2] = 3;
    //         //     }else v[n-1][m-1] = 3;
    //         // }
    //     }
    // }
    lli z = min(n,m);
    fr(i,z){
        fr(j,z){
            if(i!=j){
                v[i][j] = 2;
            }else{
                v[i][j] = 3;
            }
        }
    }
    
    if(z == m){
        for(lli i =m;i<n;++i){
            for(lli j = 0;j<m;++j){
                if(j==m-1){
                    v[i][j] = 3;
                }else v[i][j] = 2;
                
            }
        }
    }
    else{
        for(lli i =0;i<n;++i){
            for(lli j = n;j<m;++j){
                if(i==n-1){
                    v[i][j] = 3;
                }else v[i][j] = 2;
                
            }
        }
    }

    fr(i,n){
        fr(j,m){
            cout << v[i][j] << " ";
        }
        cout << "\n";
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