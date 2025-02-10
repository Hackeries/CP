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

lli n,k;
vector<lli>v;

int check(lli mid){
	lli lastP = 0;
	lli pspawned = 0;
	
	fr(i,n){
		if(lastP >= v[i]){
			lastP-=v[i];
		}else{
			pspawned++;
			if(pspawned > k)return 0;
			
			lastP = mid;
			if(lastP >= v[i]){
				lastP-=v[i];
			}else{
				return 0;
			}
		}
	}
	return 1;
}

void solve(){
	cin >> n >> k;
	v.resize(n);
	lli sum = 0;
	fr(i,n){
		cin >> v[i];
		sum+=v[i];
	}
	
	lli lo=0,hi=sum,ans=-1;
	
	while(lo<=hi){
		lli mid = lo+(hi-lo)/2;
		
		if(check(mid) == 1){
			ans = mid;
			hi = mid - 1;
		}else{
			lo = mid + 1;
		}
	}
	cout << ans << "\n";
}

signed main(){
	
    fastIO;
    int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}
