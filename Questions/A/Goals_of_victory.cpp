#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n;
    x = n-1;
    int score = 0;
    vector<int>v(x);
    for(int i=0;i<x;++i){
        cin >> v[i];

        score+=v[i];
    }
    cout << -(score) << endl;
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