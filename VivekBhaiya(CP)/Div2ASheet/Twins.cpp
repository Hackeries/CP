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
    ll total_sum = 0;
    ll curr_sum = 0;
    ll coins = 0;

    for(int i=0;i<n;++i){
        cin >> v[i];
        total_sum+=v[i];
    }

    sort(v.begin(),v.end() , greater<int>());

    ll half = total_sum/2;
    for(int i=0;i<n;++i){
        if(curr_sum > half){
            break;
        }
        curr_sum+=v[i];
        coins++;
    }
    cout << coins << endl;
}


int main(){
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}