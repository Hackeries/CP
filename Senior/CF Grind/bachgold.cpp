#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vector<lli> (m))
#define vpii vector<pair<lli,lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
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
vi sieve(lli n){
	vector<bool> isPrime(n+1 , true);
	isPrime[0] = isPrime[1] = false;
	for(lli i= 2;i*i<=n;++i){
		if(isPrime[i]){
			for(lli j = i*i;j<=n;j+=i)
				isPrime[j] = false;
		}
	}
	
	vi ok;
	for(lli i=2;i<=n;++i){
		if(isPrime[i])ok.pb(i);
	}
	return ok;
}
void solve(){
    lli n;cin >> n;
    if(n%2 == 0){
    	cout << n/2 << "\n";
    	for(lli i =0;i<n/2;++i){
    		cout << 2 << " ";
    	}
    }else{
    	cout << n/2 << "\n";
    	for(lli i =0;i<n/2 - 1;++i){
    		cout << 2 << " ";
    	}
    	cout << 3;
    }
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}