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

// bool check(vector<lli>&v, lli size){
// 	if(size == 0 || size == 1){
// 		return true;
// 	}
	
// 	return(v[size-1] >= v[size-2]) && check(v,size-1);
	
// }
// void solve(){
// 	lli a,b,c;cin >> a >> b >> c;
// 	lli arr[3] = {a,b,c};
// 	sort(arr,arr+3);
	
// 	fr(i,3){
// 		cout << arr[i] << "\n";
// 	}
	
// 	cout << "\n";
	
// 	cout << a << "\n";
// 	cout << b << "\n";
// 	cout << c << "\n";
// }

// signed main(){
	
//     fastIO;
//     // int t=1;
//     // cin >> t;

//     // while(t--){
//         solve();
//     // }
// }

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

void solve(){
	double N;cin >> N;
    if (N == static_cast<int>(N)) {
        cout << "int " << static_cast<int>(N) << "\n";
    } else {

        int intPart = static_cast<int>(N);
        double decimalPart = N - intPart;
        
        cout << "float " << intPart << " " << decimalPart << "\n";
    }
}
signed main(){	
    fastIO;
    // int t=1;
    // cin >> t;
 
    // while(t--){
        solve();
    // }
}
