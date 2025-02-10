#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;cin >> n;
    vector<ll>v(n+1);
    for(int i=1;i<=n;++i){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    ll ans = 0;
    for(int i=2;i<=n;++i){
        ans = ans + v[i] - v[i-1];
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }
}