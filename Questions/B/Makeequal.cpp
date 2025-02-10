#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    long long sum = 0;
    for(int i=0;i<n;++i){
        cin >> v[i];
        sum+=v[i];
    }
    // sort(v.begin(),v.end());

    long long k = sum/n;

    for(int i=0;i<n;++i){
        if(v[i] < k){
            cout << "NO" << endl;
            return;
        }

        v[i+1] += v[i] - k;
        v[i] = k;

    }
    cout << "YES" << endl;
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