#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,k;
    cin >> x >> k;

    if (x % k != 0) {
        cout << "1\n" << x << endl;
    }else{
        cout << "2\n" << "1 " << x-1 << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}