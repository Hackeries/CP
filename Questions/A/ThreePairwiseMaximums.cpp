#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    vector<int>v(3);
    for(int i=0;i<size(v);++i){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    if(v[1]!=v[2]){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << v[0] << " " << v[0] << " " << v[2] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}