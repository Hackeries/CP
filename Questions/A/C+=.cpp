#include<bits/stdc++.h>
using namespace std;
int solve(int a ,int b, int n){
    int operation = 0;
    while(a<=n && b<=n){

        if(a<b){
            a+=b;
        }
        else{
            b+=a;
        }
        operation++;
    }
    return operation;
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);

    int t=1;
    cin >> t;

    while(t--){
        int a,b,n;
        cin >> a >> b >> n;
        int ans = solve(a,b,n);
        cout << ans << endl;
    }
}

