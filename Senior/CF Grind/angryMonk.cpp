#include <bits/stdc++.h>
#define lli long long int
#define all(v) (v).begin(), (v).end()
#define f(i,n) for(lli i=0;i<n;++i)
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
	lli n,k;cin >> n >> k;
	vector<lli>v(k);
	f(i,k)cin >> v[i];
	
	sort(all(v));
	lli ok = 0;
	for(lli i = 0;i<k-1;++i){
		if(v[i] != 1)ok+=v[i]*2 - 1;
		else ok+=1;
	}
	cout << ok << "\n";
}

signed main(){
	
    fastIO;
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}