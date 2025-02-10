#include <bits/stdc++.h>
#define lli long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
lli binpow(int base, int expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        int temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}
lli inverse(int x){
    return (x,(MOD-2));
}
lli gcd(lli a, lli b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve(){
    lli n,m;
    cin >> n >> m;
    vector<lli>v1(n);
    vector<lli>v2(m);

    for(int i=0;i<n;++i){
        cin >> v1[i];
    }
    for(int i=0;i<m;++i){
        cin >> v2[i];
    }


    sort(v1.begin() , v1.end());
    lli preval = 0;

    for(int i=1;i<n;++i){
        preval = gcd(v1[i] - v1[0] , preval);
    }
    for(int j=0;j<m;++j){
        cout << gcd(preval , v1[0] + v2[j]) << " ";
    }
}

int main(){
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}