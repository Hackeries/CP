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

lli count_k(int n, const string& s){
    lli z = 0;
    for(char c : s) {
        if (c == '0') {
            z++;
        }
    }
    lli ok = n - z;
    lli res = 0;
    for(lli k = 1; k <= n; ++k){
        if ((k >= z && (k - z) % 2 == 0) || (k >= ok && (k - ok) % 2 == 0)) {
            res++;
        }
    }
    return res;
}

signed main() {
    lli t;
    cin >> t;
    while (t--) {
        lli n;
        cin >> n;
        string s;
        cin >> s;
        cout << count_k(n, s) << endl;
    }
}


// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define fi first
// #define sc second
// #define pb push_back
// #define EB emplace_back
// #define MP make_pair
// #define vi vector<lli>
// #define vov vector<vector<lli>>
// #define vpii vector<pair<lli,lli>>
// #define all(o) (o).begin(), (o).end()
// #define fr(i,n) for(lli i=0;i<n;++i)
// #define br(n,i) for(lli i=n;i>=0;--i)
// #define vovfr(i,n,m) fr(i,n){fr(j,m){}}
// #define rep(i,a,b) for(lli i=a;i<=b;++i)
// #define per(i,b,a) for(lli i=b;i>=a;--i)
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// using namespace std;
// const int MOD = 1e9 + 7;

// lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
// lli binpow(lli base, lli expo){
//     if(expo == 0)return 1;

//     if(expo%2 == 1){
//         return (base * binpow(base , expo-1)) % MOD;
//     }else{
//         lli temp = binpow(base , expo / 2);
//         return (temp * temp) % MOD;
//     }
// }

// void solve(){
//     lli n;
//     cin >> n;
//     string s;
//     cin >> s;
    
//     // Count zeros
//     lli zero = 0;
//     rep(i, 0, n - 1) {
//         if (s[i] == '0') zero++;
//     }
    
//     // Find first and last zero positions
//     lli fi = -1, si = -1;
//     rep(i, 0, n - 1) {
//         if (s[i] == '0') {
//             fi = i;
//             break;
//         }
//     }
//     per(i, n - 1, 0) {
//         if (s[i] == '0') {
//             si = i;
//             break;
//         }
//     }
    
//     // Count ones between first and last zero
//     lli cnt = 0;
//     if (fi != -1 && si != -1) {
//         for (lli i = fi; i <= si; ++i) {
//             if (s[i] == '1') {
//                 cnt++;
//             }
//         }
//     }

//     // Output result
//     if (zero > 0) {
//         cout << zero + cnt << "\n";
//     } else {
//         cout << n - 1 << "\n";
//     }
// }

// signed main() {
//     fastIO;
//     lli t = 1;
//     cin >> t;

//     while (t--) {
//         solve();
//     }
// }
