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

vector<int> calcprefixSum(vector<int>&v){
    int n = v.size();
    vector<int>prefixSum(n);

    prefixSum[0] = v[0];

    for(int i=0;i<n;++i){
        prefixSum[i] = prefixSum[i-1] + v[i];
    }
    return prefixSum;
}
void range(vector<int>&prefixSum , int l , int r , int x){
    int n = prefixSum.size();
    prefixSum[l-1]+=x;
    if(r<n)
    prefixSum[r+1]-=x;

}
void solve(){
    // int n;cin >> n;
    // vector<int>v(n,0);
    // for(int i=0;i<n;++i){
    //     cin >> v[i];
    // }

    // vector<int> partialSum = calcprefixSum(v);
    // int q;cin >> q;
    // while(q--){
    //     int l,r,x;
    //     cin >> l >> r >> x;
    //     range(partialSum,l,r,x);
    // }
    // for (int i = 0; i < n; ++i) {
    //     cout << v[i];
    // }
    // cout << endl;

    int n,q;
    cin >> n >> q;
    vector<int>v(n,0);
    while(q--){
        int l,r,x;
        cin >> l >> r >> x;

        v[l-1]+=x;
        if(r<n){
            v[r]-=x;
        }
    }

    for(int i=1;i<n;++i){
        v[i] +=v[i-1];
    }

    for(int i = 0;i<n;++i){
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    ios 
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}