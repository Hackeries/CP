#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n;cin >>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int count = 0;
    for(int i=0;i<n;++i){
        if((v[i] == 1)){
            count++;
        }
    }
    cout << n - (count/2) << endl;
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}
