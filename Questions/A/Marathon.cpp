#include<bits/stdc++.h>
using namespace std;
void solve(){
    // int a,b,c,d;
    vector<int>v(4);
    for(int i=0;i<4;++i){
        cin >> v[i];
    }
    // cin >> a >> b >> c >> d;
    int count = 0;
    for(int i=1;i<4;++i){
        if(v[0] < v[i]){
            count++;
        }
    }
    cout << count << endl;
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