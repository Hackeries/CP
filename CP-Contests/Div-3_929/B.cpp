#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;

    ll sum = 0;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
        sum+=v[i];
    }

    if(sum%3 == 0){
        cout << 0 << endl;
        return;
    }
    if(sum % 3 == 2){
        cout << 1 << endl;
        return;
    }

    for(int i=0;i<n;++i){
        ll temp = sum - v[i];
        if(temp % 3 == 0){
            cout << 1 << endl;
            return;
        }
    }
    cout << 2 << endl;
    
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