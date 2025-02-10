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
    ll n,a,b;
    cin >> n >> a >> b;

    if(b < a){
        cout << (n*a) << endl;
    }else{
        ll x = min(n,b-a);
        ll y = n-x;
        ll z = b-x;

        ll ans = (y*a) + (b*(b+1)/2) - (z*(z+1)/2);
        cout << ans << endl;
    }
}

signed main(){
    ios 
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}