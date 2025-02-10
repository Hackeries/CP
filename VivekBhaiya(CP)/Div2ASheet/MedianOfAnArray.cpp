#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fr first
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
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    fr(i,n){
        cin >> v[i];
    }
    
    sort(all(v));
    int mid = 0;
    if(n&1){
        
        mid = n>>1;
    }else{
        mid = (n>>1) - 1;
    }
    int temp = v[mid];
    int count = 1;
    for(int i = mid + 1; i<n;++i){
        if(v[i] < temp+1){
            count++;
        }else{
            break;
        }
    }
    cout << count << "\n";
}

signed main(){
    
    fastIO;
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}