#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    int end = 0;
    int start = n-1;

    vector<int>v(n);
    for(int i=0,p; i<n; ++i){
        cin >> p;
        v[i] = p;
    }

    for(int i=0;i<n;++i){
        if(v[i]){
            if(i < start)
            start = i;
            if(i > start)
            end = i;
        }
    }
    int count = 0;
    for(int i=start;i<=end;++i){
        if(!v[i])
        count++;
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
