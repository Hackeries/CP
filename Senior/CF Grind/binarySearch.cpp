#include <bits/stdc++.h>
#define lli long long
#define pii pair<int,int>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>v(n,vector<lli> (m))
#define vpii vector<pair<lli,lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i,n) for(lli i=0;i<n;++i)
#define br(n,i) for(lli i=n;i>=0;--i)
#define vovfr(i,n,m) fr(i,n){fr(j,m){}}
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;
const int MOD = 1e9 + 7;
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

// void solve(){
//     lli n,q;cin >> n >> q;
//     vi v(n);fr(i,n)cin >> v[i];
//     sort(all(v));
//     while(q--){
//     	string s;cin >> s;
//     	if(s == "binary_search"){
//     		lli x;cin >> x;
//     		// if(x<=n){
//     		// 	cout << "found\n";
//     		// }else{
//     		// 	cout << "not found\n";
//     		// }
//             bool found = false;
//             for (lli i = 0; i < n; ++i) {
//                 if (v[i] == x) {
//                     found = true;
//                     break;
//                 }
//             }
//             cout << (found ? "found\n" : "not found\n");
//     	}else if(s == "lower_bound"){
//     		lli x;cin >> x;
//     		auto it = lower_bound(all(v),x);
//             if(it!=v.end()){
//                 cout << *it << "\n";
//             }else{
//                 cout << "-1\n";
//             }
//     	}else if(s == "upper_bound"){
//     		lli x;cin >> x;
//     		auto it = upper_bound(all(v),x);
//             if(it!=v.end()){
//                 cout << *it << "\n";
//             }else{
//                 cout << "-1\n";
//             }
//     	}
//     }
// }


// void solve(){
//     lli n,q;cin >> n >> q;
//     vi v(n);fr(i,n)cin >> v[i];
//     sort(all(v));
//     while(q--){
//         string s;cin >> s;
//         if(s == "binary_search"){
//             lli x;cin >> x;
//             if(x<=n){
//                 cout << "found\n";
//             }else{
//                 cout << "not found\n";
//             }
//         }else if(s == "lower_bound"){
//             lli x;cin >> x;
//             lli ok = -1;
//             for(lli i = 0;i<n;++i){
//                 if(v[i] >= x){
//                     ok = v[i];
//                     break;
//                 }
//             }
//             cout << ok << "\n";
//         }else if(s == "upper_bound"){
//             lli x;cin >> x;
//             lli ok = -1;
//             for(lli i = 0;i<n;++i){
//                 if(v[i] > x){
//                     ok = v[i];
//                     break;
//                 }
//             }
//             cout << ok << "\n";
//         }
//     }
// }


bool binary_search(const vi& v, lli x) {
    int left = 0, right = v.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (v[mid] == x) return true;
        else if (v[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

lli lower_bound(const vi& v, lli x) {
    int left = 0, right = v.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (v[mid] < x) left = mid + 1;
        else right = mid;
    }
    if (left < v.size()) return v[left];
    else return -1;
}

lli upper_bound(const vi& v, lli x) {
    int left = 0, right = v.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (v[mid] <= x) left = mid + 1;
        else right = mid;
    }
    if (left < v.size()) return v[left];
    else return -1;
}

void solve() {
    lli n, q;
    cin >> n >> q;
    vi v(n);
    fr(i, n) cin >> v[i];
    sort(v.begin(), v.end()); // Ensure the array is sorted

    while (q--) {
        string s;
        cin >> s;
        if (s == "binary_search") {
            lli x;
            cin >> x;
            if (binary_search(v, x)) {
                cout << "found\n";
            } else {
                cout << "not found\n";
            }
        } else if (s == "lower_bound") {
            lli x;
            cin >> x;
            cout << lower_bound(v, x) << "\n";
        } else if (s == "upper_bound") {
            lli x;
            cin >> x;
            cout << upper_bound(v, x) << "\n";
        }
    }
}

signed main(){
    fastIO;
    lli t=1;
    // cin >> t;

    while(t--){
        solve();
    }
}