#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;

    int sum = 0;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
        sum+=v[i];
    }
    // int store = sum - m;
    // if(store<0){
    //     cout << 0 << endl;
    // }
    // else{
    //     cout << store << endl;
    // }
    int store = min(sum, m);
    cout << max(0, sum - store) << endl;
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