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
//     lli n,k;cin >> n >> k;
//     vi v(n);fr(i,n)cin >> v[i];
//     sort(all(v),greater<lli>());
//     vi prefix(n);
    
//     lli sum = accumulate(all(v),0ll);
//     if(sum<k){
//         cout << k-sum << "\n";
//         return;
//     }
//     if(sum == k){
//         cout << 0 << "\n";
//         return;
//     }
//     prefix[0] = v[0];
//     for(lli i =1;i<n;++i){
//         prefix[i] = prefix[i-1] + v[i];
//     }
//     // for(auto x:prefix)cout << x << " ";
//     //     cout << "\n";
    
//     for(lli i = 0;i<prefix.size();++i){
//         if(v[i] == k){
//             cout << 0 << "\n";
//             return;
//         }
//     }
//     lli store = 0;
//     for(lli i = 0;i<prefix.size();++i){
//         if(prefix[i] > k){
//             store = prefix[i-1];
//             break;
//         }
//     }
//     // cout << store << "\n";
//     cout << k - store << "\n";
// }

// signed main(){
//     fastIO;
//     lli t=1;
//     cin >> t;

//     while(t--){
//         solve();
//     }
// }
// #include <bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main() {
//     // your code goes here
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,x,coin=0,sum=0;
//         cin>>n>>x;
//         vector<int>a(n),b(n),res(n,0);
//         for(int i=0;i,n;i++)cin>>a[i];
//         for(int i=0;i,n;i++)cin>>b[i];
//         for(int i=0;i<n;i++){
//             res[i]=b[i]*a[i];
//         }
//         sort(res.begin(),res.end(),greater<ll>());
//         for(int i=0;i<n;i++)
//         {
//            coin++;
//             if(x>sum)
//             {
//                 sum+=res[i];
//             }
//             if(x==sum)
//             {
//                 cout<<coin<<endl;
//                 return 0;
//             }
//             if(x<sum)
//             {
//                 cout<<coin<<endl;
//                 return 0;
//             }
//         }
       
//     }
//     return 0;
// }

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> a(n), b(n), res(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        for (int i = 0; i < n; i++) {
            res[i] = b[i] * a[i];
        }
        sort(res.rbegin(), res.rend()); // Sort in descending order

        ll coin = 0, sum = 0;
        bool achieved = false;

        for (int i = 0; i < n; i++) {
            coin++;
            sum += res[i];
            if (sum >= x) {
                cout << coin << endl;
                achieved = true;
                break;
            }
        }

        if (!achieved) {
            cout << -1 << endl; // Output -1 if target `x` is not achievable
        }
    }
    return 0;
}
