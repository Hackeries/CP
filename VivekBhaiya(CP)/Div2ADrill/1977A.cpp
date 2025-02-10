#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    if(n<m){
        cout << "No\n";
    }else{
        n = n - m;
        if(n%2 == 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}