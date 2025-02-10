#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
ll inverse(ll x){return (x,(MOD-2));}
ll gcd(ll a, ll b){return b == 0 ? a : gcd(b,a%b);}
ll binpow(ll base, ll expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        ll temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve(){
    int n,s,k;
    cin >> n >> s >> k;


    unordered_set<int> floors;
        for (int i = 0; i < k; ++i) {
            int floor;
            cin >> floor;
            floors.insert(floor);
        }

        int mini = INT_MAX;
        for (int i = 0; i <= n; ++i) {
            if ((s + i <= n && floors.find(s + i) == floors.end()) || (s - i >= 1 && floors.find(s - i) == floors.end())) {
                mini = i;
                break;
            }
        }

        cout << mini << endl;
    
    // vector<int>floors;

    // for(int i=1;i<=n;++i){
    //     floors.pb(i);
    // }

    // vector<int>v(k);
    // for(int i=0;i<k;++i){
    //     cin >> v[i];
    // }

    // for (int i = 0; i < k; ++i) {
    //     auto it = find(floors.begin(), floors.end(), v[i]);
    //     if (it != floors.end()) {
    //         floors.erase(it);
    //     }
    // }

    // for (int i = 0; i < floors.size(); ++i) {
    //     cout << floors[i] << " ";
    // }
    // cout << endl;

}

signed main(){
    ios 
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}