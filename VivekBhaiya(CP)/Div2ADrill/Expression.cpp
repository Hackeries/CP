#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    int temp1 = a+b+c;
    int temp2 = a*(b+c);
    int temp3 = a+(b*c);
    int temp4 = a*b*c;
    int temp5 = (a+b)*c;
    int temp6 = (a*b)+c;
    cout << max({temp1 , temp2 , temp3 , temp4 , temp5 , temp6});
}

int main(){
    int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}