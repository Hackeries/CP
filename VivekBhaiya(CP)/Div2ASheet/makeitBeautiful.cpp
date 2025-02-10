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

// void solve(){
// 	int n;cin >> n;
// 	vector<int>v(n+1);
// 	vector<int>pr(n+1);
// 	fr(i,n)cin >> v[i];
	
// 	for (int i = 1; i <= n; ++i) {
//         pr[i] = v[i-1] + pr[i-1];
//     }
    
//     // Check and swap
//     bool swapped = false;
//     for (int i = 1; i < n; ++i) {
//         if (pr[i] != 0 && pr[i+1] % pr[i] == 0) {
//             swap(v[i-1], v[i]);
//             swapped = true;
//             break;
//         }
//     }
    
//     if (swapped) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Sort the array to facilitate checking conditions
    sort(a.begin(), a.end());
    
    // Check if the array can be made beautiful
    bool possible = true;
    for (int i = 2; i < n; ++i) {
        if (a[i] == a[i-1] + a[i-2]) {
            possible = false;
            break;
        }
    }
    
    if (!possible) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

signed main(){
	
    fastIO;
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}