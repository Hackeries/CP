#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,a;
    cin >> n >> x;

    // vector<int>a(n);
    for(int i=0;i<n;++i){
        cin >> a;
    }
    if(n==1){
        cout << a << endl;
    }else{
        cout << x-n << endl;
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