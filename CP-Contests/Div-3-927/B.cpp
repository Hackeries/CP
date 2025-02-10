#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    ll y = v[0];
    for(int i=1;i<n;++i){
        if(v[i] > y){
            y = v[i];
        }
        else{
            ll k = 1 , temp = v[i];
            while(v[i] <= y){
                v[i] = temp*k;
                k++;
            }
            y = v[i];
        }
    }
    cout << y << endl;
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