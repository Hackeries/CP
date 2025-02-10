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
    int n, s, m;
    cin >> n >> s >> m;

    vector<int> start(n), end(n);
    for (int i = 0; i < n; ++i) {
        cin >> start[i] >> end[i];
    }

    // Sort the tasks by their start time
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    // Check the free time before the first task
    if (start[0] >= s) {
        cout << "YES\n";
        return;
    }

    // Check the free time between tasks
    for (int i = 1; i < n; ++i) {
        if (start[i] - end[i - 1] >= s) {
            cout << "YES\n";
            return;
        }
    }

    // Check the free time after the last task
    if (m - end[n - 1] >= s) {
        cout << "YES\n";
        return;
    }

    // If no suitable time is found
    cout << "NO\n";
}
signed main(){
    fastIO;
    lli t=1;
    cin >> t;

    while(t--){
        solve();
    }
}