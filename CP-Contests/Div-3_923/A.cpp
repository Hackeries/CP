#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin >> n;
    string s;
    cin >> s;

    int a = 0;
    int b = 0;

    for(int i=0;i<n;++i){
        if(s[i] == 'B'){
            a = i;
            break;
        }
    }

    for(int i = n-1;i>=0;--i){
        if(s[i] == 'B'){
            b=i;
            break;
        }
    }
    cout << b-a+1 << endl;
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