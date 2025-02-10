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

void solve() {
    int n;
    cin >> n;
    vector<ll> v(n);
    ll c = 0;
    long long maxSum = 0;
    // bool neg = true;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];

        // if(v[i] >= 0){
        //     neg = false;
        // }
    }

    // if(neg){
    //     ll sum = 0;
    //     for(int i=0;i<n;++i){
    //         sum+=v[i];
    //     }
    //     cout << abs(sum) << endl;
    // }else{
    
    for (int i = 0; i < n; ++i) {
        if (v[i] >= 0) {
            c += v[i];
        }else{
            c = max(c + v[i] , c - v[i]);
        }
    }
    cout << c << endl;
    
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}