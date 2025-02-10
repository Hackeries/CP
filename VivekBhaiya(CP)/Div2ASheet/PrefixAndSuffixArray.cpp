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
    int n; cin >> n;
	vector <string> v;
	for(int i = 0; i < 2 * n - 2; i++){
		string s; 
		cin >> s;
		if((int)s.size() == n - 1){
			v.push_back(s);
		}
	}
	reverse(v[1].begin(), v[1].end());
	if(v[0] == v[1]){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
}

signed main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}