#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli,lli>
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
const lli MOD = 1e9 + 7;
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
    vi v(n);fr(i,n)cin >> v[i];
    map<lli,lli>mp;
    vi temp(all(v));
    sort(all(temp));
    
    vi prefix(n,0);
    prefix[0] = temp[0];
    for(lli i =1;i<n;++i){
    	prefix[i] = prefix[i-1] + temp[i];
    }
    // for(auto x:prefix)cout << x << " ";
    // 	cout << "\n";
    vi ans(n,0);
    ans[n-1] = n-1;
    
    for(lli i = prefix.size()-2;i>=0;--i){
        // lli cnt = i;
        // for(lli j = i+1;j<=v.size();++j){
        //     if(prefix[i] >= v[j]){
        //         cnt++;
        //     }
        // }
        // ans[i] = cnt;
        if(prefix[i]>=temp[i+1])ans[i] = ans[i+1];
        else ans[i] = i;
    }
    // for(auto x:ans)cout << x << " ";
    //     cout << "\n";
    
    fr(i,n){
        mp.insert({temp[i],ans[i]});
    }
    
    // for(auto x:mp)cout << x.first << ": " << x.second << "\n";
    // cout << "\n";
    
    fr(i,n){
        // mp[v[i]] = v[i];
        cout << mp[v[i]] << " ";
    }
    cout << "\n";
    
}

signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}