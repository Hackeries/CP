#include <bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int z;
    cin >> z;
    vector<int>var(z);
    for(int i=0;i<z;++i){
        cin >> var[i];
    }
    int store = INT_MAX;

    for(int i=0;i<z-1;++i){
        int temp = max(var[i] , var[i+1]);
        store = min(store , temp);
    }
    cout << (store-1) << endl;
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}