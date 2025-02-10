#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void preSum(vector<int>&prefixSum , vector<int>&v,int n){
    prefixSum[0] = 0;
    for(int i=1;i<=n;++i){
        prefixSum[i] = prefixSum[i-1] + v[i-1] - 1;
    }
}
void solve(){
    int n,q;
    cin >> n >> q;

    vector<int>v(n);
    vector<int>vv(n+1);
    vv[0] = 0;

    for(int i=0;i<n;++i){
        cin >> v[i];
        if(v[i] == 1)
        vv[i+1] = vv[i] + 1;
        else
        vv[i+1] = vv[i];
    }

    vector<int>pr(n+1);
    preSum(pr,v,n);

    while(q--){
        int l,r;
        cin >> l >> r;

        if(l==r){
            cout << "NO" << endl;
            continue;
        }

        int cnt1 = vv[r] - vv[l-1];
        int sum = pr[r] - pr[l-1];

        if(sum >= cnt1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
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