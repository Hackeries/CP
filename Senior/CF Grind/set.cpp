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

void solve(){
    lli n;cin >> n;
    set<lli>ss;
    
    while(n--){
    	string s;cin >> s;
    	if(s == "insert"){
    		lli x;cin >> x;
    		ss.insert(x);
    	}else if(s == "find"){
    		lli x;cin >> x;
    		if(ss.find(x) != ss.end()){
    			cout << "found\n";
    		}else{
    			cout << "not found\n";
    		}
    	}else if(s == "lower_bound"){
    		lli x;cin >> x;
    		auto it = ss.lower_bound(x);
    		if(it!=ss.end()){
    			cout << *it << "\n";
    		}else{
    			cout << "-1\n";
    		}
    	}else if(s == "upper_bound"){
    		lli x;cin >> x;
    		auto it = ss.upper_bound(x);
    		if(it!=ss.end()){
    			cout << *it << "\n";
    		}else{
    			cout << "-1\n";
    		}
    	}
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