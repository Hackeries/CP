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

bool solve(vector<lli>&v , lli x){
	lli start = 0;
	lli end = v.size() - 1;
	while(start <= end){
		
		lli mid = start + (end-start)/2;
		if(v[mid] == x){
			return true;
		}else if(v[mid] < x){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	return false;
}

signed main(){
	
    fastIO;
    lli n,q;cin >> n >> q;
	vector<lli>v(n);
	fr(i,n)cin >> v[i];
	
	sort(all(v));
	
	for(lli i=0;i<q;++i){
		lli x;cin >> x;
		if(solve(v,x)){
			cout << "found" << "\n";
		}else{
			cout << "not found" << "\n";
		}
	}
}