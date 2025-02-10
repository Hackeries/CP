#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    int count = -1;

    for(int i=1;i<n;++i){
        if(str[i-1] == str[i] && str[i] == '*'){
            count = i;
            break;
        }
    }

    if(count == -1)
        count = n;

    int ans = 0;
    for(int i=0;i<count;++i)
        if(str[i] == '@')
            ans++;
    cout << ans << endl;
    
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