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
	lli n;cin >> n;
	vector<lli>v(n);
	fr(i,n)cin >> v[i];
	vector<lli>even,odd;
	
	fr(i,n){
		if(v[i]&1){
			odd.push_back(v[i]);
		}else{
			even.push_back(v[i]);
		}
	}
	
	sort(all(even));
	sort(all(odd));

	lli size = even.size();
	lli size2 = odd.size();
	
	if(size == 1 && size2 == 1){
		cout << "-1\n";
	}else{
		lli ok=0,okk=0;
		if(size-2>=0)ok = even[size-1] + even[size-2];
		if(size2-2>=0)okk = odd[size2-1] + odd[size2-2];
		cout << max(ok,okk) << "\n";
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