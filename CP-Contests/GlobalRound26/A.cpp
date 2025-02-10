#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n;cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    if(v[0]!=v[n-1]){
        cout << "YES\n";
        string s(n,'B');
        s[0] = 'R';
        cout << s << endl;
    }else{
        cout << "NO\n";
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}