#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;
 
int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}
 
void solve(){
    int n;cin >> n;
    vector<int>v(n);
    int evencount = 0;
    int oddcount = 0;
    for(int i=0;i<n;++i){
        cin >> v[i];
 
        if(v[i]%2 == 0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    // cout << abs(evencount - oddcount) << endl;
 
    int last_even = -1;
    int last_odd = -1;
 
    for(int i=0;i<n;++i){
        if(v[i] % 2 == 0){
            last_even = i+1;
        }else{
            last_odd = i+1;
        }
    }
 
 
    if (evencount == 1) {
        cout << last_even << endl;
    } else {
        cout << last_odd << endl;
    }
}
 
int main(){
    int t=1;
    // cin >> t;
 
    // while(t--){
        solve();
    // }
}