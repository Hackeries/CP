#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fr first
#define sc second
#define EB emplace_back
#define MP make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
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

void solve(){
	lli n,q;cin >> n >> q;
	vector<lli>v(n);
	fr(i,n){
		cin >> v[i];
	}
	
	while(q--){
		string s;
		cin >> s;
		if(s == "sort"){
			lli l,r;cin >> l >> r;
			if(l>r){
				swap(l,r);
			}
			l--;r--;
			sort(v.begin()+l , v.begin()+r+1);
			
			// for(auto x:v){
			// 	cout << x << " ";
			// }
			// cout << "\n";
		}else if(s == "pop_back"){
		
			v.pop_back();
		}else if(s == "front"){
			cout << v.front() << "\n";
			
		}else if(s == "back"){
			cout << v.back() << "\n";
		}else if(s == "reverse"){
			lli l,r;
			cin >> l >> r;
			l--;r--;
			reverse(v.begin()+l , v.begin()+r+1);
			
			// for(auto x:v){
			// 	cout << x << " ";
			// }
			// cout << "\n";
		}else if(s == "push_back"){
			lli x;cin >> x;
			v.push_back(x);
		}else{
			lli pos;
			cin >> pos;
			cout << v[pos-1] << "\n";
		}
	}
}

signed main(){
	
    fastIO;
    // int t=1;
    // cin >> t;

    // while(t--){
        solve();
    // }
}