#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
ll inverse(ll x){return (x,(MOD-2));}
ll gcd(ll a, ll b){return b == 0 ? a : gcd(b,a%b);}
ll binpow(ll base, ll expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        ll temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    int n;cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;++i){
        cin >> v[i];
    }
    // sort(v.begin() , v.end());

    // int sum = 0;
    // for(int i=0;i<n;++i){   
    //     if(n<=2){
    //         sum+=v[i];
    //     }else{
    //         sum = v[n-1] + v[n-2];
    //     }
    // }
    // cout << sum << endl;

    int last = v[n-1];
    int maxi = INT_MIN;

    for(int i = 0;i<n-1;++i){
        maxi = max(maxi , v[i]);
    }

    cout << maxi + last << endl;

}
// 
signed main(){
    ios 
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}