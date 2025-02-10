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

// void solve() {
//     lli n;
//     cin >> n;
//     vector<lli> v(n);
//     for(lli i = 0; i < n; ++i) {
//         cin >> v[i];
//     }
    
//     vector<lli> store;
    
//     for (lli i = 0; i < n - 1; ++i) {
//         for (lli j = i + 1; j < n; ++j) {
//             lli total_sum = v[i] + v[j];
//             if (total_sum % 2 == 0) {
//                 store.push_back(total_sum);
//             }
//         }
//     }
    
//     lli max_even_sum = LLONG_MIN;
//     for (auto sum : store) {
//         if (sum > max_even_sum) {
//             max_even_sum = sum;
//         }
//     }
//     cout << max_even_sum << "\n";
// }

// signed main(){
	
//     fastIO;
//     int t=1;
//     // cin >> t;

//     // while(t--){
//         solve();
//     // }
// }




void solve() {
    lli n;
    cin >> n;
    
    vector<lli> v(n);
    for (lli i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    if (n < 2) {
        cout << "No even sum found\n";
        return;
    }
    
    lli max_even_sum = LLONG_MIN;
    lli max_element = v[0]; // Initialize with the first element
    
    // Find the maximum element in the array
    for (lli i = 1; i < n; ++i) {
        if (v[i] > max_element) {
            max_element = v[i];
        }
    }
    
    // Check all pairs (i, j) where i < j
    for (lli i = 0; i < n - 1; ++i) {
        for (lli j = i + 1; j < n; ++j) {
            lli total_sum = v[i] + v[j];
            if (total_sum % 2 == 0 && total_sum > max_even_sum) {
                max_even_sum = total_sum;
            }
        }
    }
    
    if (max_even_sum == LLONG_MIN) {
        cout << "No even sum found\n";
    } else {
        cout << max_even_sum << "\n";
    }
}

int main() {
    solve();
    return 0;
}




