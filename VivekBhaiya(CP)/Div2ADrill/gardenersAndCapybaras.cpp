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
//     string s;cin >> s;
//     vector<char>v;
//     vector<char>v2;
//     for(auto x:s){
//     	if(x == 'b')
//     		v.pb(x);
//     	else v2.pb(x);
//     }
    
//     if(v2.size() == 2){
//         cout << v2[0] << " ";
//         for(auto x:v)cout << x;
//         cout << " ";
//         cout << v2[v2.size()-1];
//         cout << "\n";
//     }
    
    
//     if(v2.size() == 1){
//         cout << v2[0] << " ";
//         for(lli i =0;i<v.size()-1;++i)cout << v[i];
//         cout << " ";
//         cout << v[v.size()-1];
        
//         cout << "\n";
//     }
    
//     if(v.size() == 0){
//         for(auto x:v2)cout << x << " ";
            
//             cout << "\n";
//     }
//     if(v2.size() == 0){
//         for(auto x:v)cout << x << " ";
            
//             cout << "\n";
//     }
// }

void solve() {
    string s;
    cin >> s;
    lli n = s.size();
 
    if (s[0] == s[1]) {
        cout << s[0] << " " << s[1] << " " << s.substr(2) << '\n';
        return;
    }
    if (s[n - 2] == s[n - 1]) {
        cout << s.substr(0, n - 2) << " " << s[n - 2] << " " << s[n - 1] << '\n';
        return;
    }
 
    if (s[0] < s[1]) {
        for (int i = 1; i < n - 1; i++) {
            if (s[i] > s[i + 1]) {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                return;
            }
        }
    } else {
        for (int i = 1; i < n - 1; i++) {
            if (s[i] <= s[i + 1]) {
                cout << s.substr(0, i) << " " << s[i] << " " << s.substr(i + 1) << '\n';
                return;
            }
        }
    }
 
    cout << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}