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
    int n,s;
    cin >> n >> s;
    
    int count = 0;
    bool ok = false;
    while(s>=n){
        s-=n;
        count++;
        ok = true;
    }
    if(ok && (s%n)!=0){
        cout << (count + 1) << endl;
    }else if((s%n) == 0){
        cout << count << endl;
    }else{
        cout << 1 << endl;
    }
}

signed main(){
    ios 
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}