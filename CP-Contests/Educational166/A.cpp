#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

bool isSorted(string s){
    for(int i = 0; i < s.size() - 1; ++i){
        if(s[i] > s[i + 1]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(isSorted(s)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    ios;
    int t = 1;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
