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
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        ll temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    ll m;cin >> m;

    ll store = m;
    ll count = 0;
    while(m!=0){
        ll digits = m % 10;
        count++;
        m/=10;
    }
    ll d = binpow(10 , (count-1));
    cout << (store-d) << endl;
}

int main(){
    ios 
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}