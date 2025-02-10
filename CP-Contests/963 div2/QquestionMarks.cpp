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
    // lli n;cin >> n;
    // string s;cin >> s;
    // unordered_map<char,lli>mp;
    
    // fr(i,4*n){
    // 	if(s[i]!='?')
    // 	mp[s[i]]++;
    // }
    
    // lli ans = 0;
    // for(auto x:mp){
    // 	if(x.second > n){
    // 		ans+=n;
    // 	}else{
    // 		ans+=x.second;
    // 	}
    // }
    // cout << ans << "\n";
    
    lli n;cin >> n;
    string s;cin >> s;
    
    unordered_map<char,lli>mp;
    // for(auto x:s){
    //     mp[x]++;
    // }
    fr(i,4*n){
        mp[s[i]]++;
    }
    
    lli ans = 0;
    ans+=min(n,mp['A']);
    ans+=min(n,mp['B']);
    ans+=min(n,mp['C']);
    ans+=min(n,mp['D']);
    
    cout << ans << "\n";
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}