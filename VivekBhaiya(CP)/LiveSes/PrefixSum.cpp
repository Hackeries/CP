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
vector<ll>calculatePrefixSum(vector<ll>&v){
    ll n = v.size();
    vector<ll> prefixSum(n);
    prefixSum[0] = v[0];
    for(int i=1;i<n;++i){
        prefixSum[i] = prefixSum[i-1] + v[i];
    }
    return prefixSum;
}

ll querryRangeSsum(vector<ll>&prefixSum , ll L , ll R){
    if(L == 0){
        return prefixSum[R];
    }else{
        return prefixSum[R] - prefixSum[L-1];
    }
}
void solve(){
    ll n;cin >> n;

    vector<ll>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    vector<ll>prefixSum = calculatePrefixSum(v);

    ll q;cin >> q;
    while(q--){
        ll L,R;
        cin >> L >> R;
        ll ans = querryRangeSsum(prefixSum , L , R);
        cout << ans << " ";
    
    }
    cout << endl;
}

int main(){
    ios 
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}