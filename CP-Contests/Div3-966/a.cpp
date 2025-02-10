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
const int MOD = 1e9 + 7;
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
//     string s = to_string(n);

//     if(s[0]>'1'){
//         cout << "NO\n";
//         return;
//     }
    
//     if(s.size() <= 3){
//         if(s[2] >= '2' && (s[0] == '1' && s[1] == '0')){
//             cout << "YES\n";
//         }else{
//             cout << "NO\n";
//         }
//     }else if(s.size()>=4){
//         if(s[2] >= '1'){
//             cout << "YES\n";
//         }else{
//             cout << "NO\n";
//         }
//     }
// }

void solve(){
    lli n;cin >> n;
    // string s = to_string(n);
    if(n > 101 && n <= 109)cout << "YES\n";
    else if(n>1009 && n<=1099)cout << "YES\n";
    else if(n>10099 && n<=10999)cout << "YES\n";
    else cout << "NO\n";
    
    // if(s.size()>=3){
    //     if(s[0] == '1' && s[1] == '0' && (s[2]>='2' || (s.size()>=4 && s[2]>='1'))){
    //         cout << "YES\n";
    //         return;
    //     }
    // }
    // cout << "NO\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}