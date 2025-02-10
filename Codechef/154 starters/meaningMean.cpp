// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<lli,lli>
// #define fi first
// #define sc second
// #define pb push_back
// #define EB emplace_back
// #define MP make_pair
// #define vi vector<lli>
// #define vov vector<vector<lli>>v(n,vector<lli> (m))
// #define vpii vector<pair<lli,lli>>
// #define all(o) (o).begin(), (o).end()
// #define fr(i,n) for(lli i=0;i<n;++i)
// #define br(n,i) for(lli i=n;i>=0;--i)
// #define vovfr(i,n,m) fr(i,n){fr(j,m){}}
// #define rep(i,a,b) for(lli i=a;i<=b;++i)
// #define per(i,b,a) for(lli i=b;i>=a;--i)
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// using namespace std;
// const lli MOD = 1e9 + 7;
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
//     lli n;cin >> n;
//     vi v(n);fr(i,n)cin >> v[i];
//     sort(all(v));
    
//     lli ok = (v[0]+v[1])/2;
    
//     if(n == 1){
//         cout << n << "\n";
//         return;
//     }
    
//     rep(i,2,n-1){
//     	ok = (ok + v[i])/2;
//     }
    
//     cout << ok << "\n";
// }

// signed main(){
//     fastIO;
//     lli t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }



#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mid=(v[0]+v[1])/2;
    
    for(int i=2;i<n;i++){
        mid =(mid + v[i])/2;
    }
    cout<<mid<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}