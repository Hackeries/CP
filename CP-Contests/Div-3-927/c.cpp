#include<bits/stdc++.h>
using namespace std;
using lli = long long int;
void solve(){
    lli n,m;
    cin >> n >> m;
    vector<lli>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    string str;
    cin >> str;

    lli mul = 1;
    for(int i=0;i<n;++i){
        mul*=v[i];
    }
    // cout << mul << endl;
    vector<lli>ans(n);
    int lo = 0 , hi = n-1;
    for(int i=0;i<n;++i){
        lli rem = mul % m;
        ans[i] = rem;
        if(str[i] == 'L'){
            mul/=v[lo++];
        }
        else{
            mul/=v[hi--];
        }
    }
    for(auto x:ans)
        cout << x << " ";
    cout << endl;
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