#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    string s;
    cin >> s;

    int len = s.length();
    // int count = 0;
    if(len > 10){
        cout << s[0] << len-2 << s[len-1] << endl;
    }else{
        cout << s << endl;
    }
}

int main(){
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}