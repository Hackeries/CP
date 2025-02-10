// #include <bits/stdc++.h>
// #define lli long long
// #define pii pair<int,int>
// #define fi first
// #define sc second
// #define EB emplace_back
// #define MP make_pair
// #define vi vector<int>
// #define vov vector<vector<int>>v(n,vector<int> (m))
// #define vpii vector<pair<int,int>>
// #define all(o) (o).begin(), (o).end()
// #define fr(i,n) for(lli i=0;i<n;++i)
// #define br(n,i) for(lli i=n;i>=0;--i)
// #define vovfr(i,n,m) fr(i,n){fr(j,m){}}
// #define rep(i,a,b) for(lli i=a;i<=b;++i)
// #define per(i,b,a) for(lli i=b;i>=a;--i)
// #define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// using namespace std;
// const int MOD = 1e9 + 7;
// lli inverse(lli x){return (x,(MOD-2));}
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

// // void solve(){
// // 	lli n,m;cin >> n >> m;
// // 	// n->0 , m->1
// // 	lli even = m/2-1;
// // 	lli odd = m/2;
    
// //     if(m > 2 * n + 2 || n>m+1){
// //         cout << -1 << "\n";
// //         return;
// //     }
    
// //     if(m%2 == 0){
// //         for(lli i = 0;i<even;++i){
// //             cout << "110";
// //         }
// //         if(abs(n-even)!=0){
// //             cout << "110";
// //         }else{
// //             cout << "11";
// //         }
        
// //     }else{
// //         for(lli i = 0;i<odd;++i){
// //             cout << "110";
// //         }
// //         cout << "1";
// //     }
// // }

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     if (n > m + 1) {
//         cout << -1 << "\n";
//         return;
//     }
//     if (m > 2 * n + 2) {
//         cout << -1 << "\n";
//         return;
//     }

//     string result;
//     while (n > 0 || m > 0) {
//         if (m > n) {
//             if (m > 1) {
//                 result += "11";
//                 m -= 2;
//             } else {
//                 result += "1";
//                 m -= 1;
//             }
//             if (n > 0) {
//                 result += "0";
//                 n -= 1;
//             }
//         } else if (m == n) {
//             result += "10";
//             m -= 1;
//             n -= 1;
//         } else {
//             result += "0";
//             n -= 1;
//             if (m > 0) {
//                 result += "1";
//                 m -= 1;
//             }
//         }
//     }

//     cout << result << "\n";
// }

// signed main(){
	
//     fastIO;
//     int t=1;
//     // cin >> t;

//     // while(t--){
//         solve();
//     // }
// }

#include <bits/stdc++.h>
using namespace std;

void solve()
{
   long long a,b,c;
   cin>>a>>b>>c;
   long long   arr[3];
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   sort(a,a+3);
   cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
   cout<<a<<endl<<b<<endl<<c<<endl;

}

signed main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}