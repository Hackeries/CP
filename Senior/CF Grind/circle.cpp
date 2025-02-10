#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vov vector<vector<int>>v(n,vector<int> (m))
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
lli inverse(lli x){return (x,(MOD-2));}
lli gcd(lli a, lli b){return b == 0 ? a : gcd(b,a%b);}
lli binpow(lli base, lli expo){
    if(expo == 0)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        lli temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}

void solve() {
    lli X1, Y1, X2, Y2, X3, Y3, X4, Y4;
    cin >> X1 >> Y1 >> X2 >> Y2;
    cin >> X3 >> Y3 >> X4 >> Y4;

    // Calculate the centers of the circles
    double centerX_A = (X1 + X2) / 2.0;
    double centerY_A = (Y1 + Y2) / 2.0;
    double centerX_B = (X3 + X4) / 2.0;
    double centerY_B = (Y3 + Y4) / 2.0;

   
    double radius_A = sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1)) / 2.0;
    double radius_B = sqrt((X4 - X3) * (X4 - X3) + (Y4 - Y3) * (Y4 - Y3)) / 2.0;

    double distance_between_centers = sqrt((centerX_B - centerX_A) * (centerX_B - centerX_A) + (centerY_B - centerY_A) * (centerY_B - centerY_A));

    if (distance_between_centers > radius_A + radius_B) {
        cout << "NO" << endl;
    } else if (distance_between_centers < fabs(radius_A - radius_B)) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

signed main(){
	
    fastIO;
    int t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}