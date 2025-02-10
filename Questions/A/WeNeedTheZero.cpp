#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int>v(n);

    int ans = 0;
    for(int i=0;i<n;++i){
        cin >> v[i];
        ans^=v[i];
    }
    if(n%2==0){
        if(ans == 0){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }else{
        cout << ans << endl;
    }
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