#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
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
	lli start = 1;
	
	fr(i,n-1){
		start*=10;
	}
	// cout << start << "\n";
    
    lli end = start;
    end*=10;
    end--;
    
    // cout << start << " " << end << "\n";
    
    lli count = 0;
    for(int i = start;i<=end;++i){
        lli num = i;
        lli zeroCount = 0;
        
        while (num > 0) {
            if (num % 10 == 0) {
                zeroCount++;
            }
            num /= 10;
        }
        
        if (zeroCount >= 2) {
            count++;
        }
    }
    cout << count << "\n";
}

signed main(){
	
    fastIO;
    int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}