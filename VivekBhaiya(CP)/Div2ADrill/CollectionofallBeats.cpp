#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int freq[10];

void solve(){
    int k;cin >> k;
    // vector<vector<string>>v(4,vector<string>(4));
    string v[4];
    for(int i=0;i<4;++i){
        cin >> v[i];
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            if(v[i][j] >= '0' && v[i][j] <= '9'){
                freq[v[i][j] - '0']++;
            }
        }
    }

    for(int i=0;i<10;++i){
        if(freq[i] > 2*k){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}