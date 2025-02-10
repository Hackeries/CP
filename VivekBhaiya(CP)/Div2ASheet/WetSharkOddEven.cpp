#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;

int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}

void solve(){
    ll n;cin >> n;
    vector<ll>v(n);
    ll sum = 0;
    ll miniodd = LLONG_MAX;
    for(int i=0;i<n;++i){
        cin >> v[i];
        sum+=v[i];
        if( (v[i] %2 != 0) && (v[i] < miniodd) ){
            miniodd = v[i];
        }
    }

    if(sum%2==0){
        cout << sum << endl;
    }else {
        cout << (sum - miniodd) << endl;
    }
}

int main(){
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}