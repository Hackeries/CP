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
//     lli n,k;cin >> n >> k;
//     vi v(n);
//     fr(i,n)cin >> v[i];
//     sort(all(v));
//     auto it = unique(all(v));
//     v.erase(it,v.end());
    
//     lli y = v.size();
//     if(y == k){
//         cout << "YES\n";
//         for(lli i = 0;i<y;++i)cout << i+1 << " ";
//         cout << "\n";
//     }else{
//         cout << "NO\n";
//     }
    
// }
void solve(){
    lli n,k;cin >> n >> k;
    vi v(n);
    fr(i,n)cin >> v[i];
    unordered_set<lli> v2;
    vector<lli> index;
    lli ok = -1;
    fr(i,n){
        if (ok != v[i]) {
            ok = v[i];
            if(v2.find(ok) == v2.end()) {
                v2.insert(ok);
                index.push_back(i + 1);
            }
        }
    }
    lli y = v2.size();
    if(y >= k){
        cout << "YES\n";
        lli ans = k;
        for(lli i = 0;i<index.size();++i){
            if(ans>0){
                cout << index[i] << " ";
                ans--;
            }
        }
        cout << "\n";
    }else{
        cout << "NO\n";
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


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>arr(n);
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp.insert({arr[i],i});
//     }
//     if(mpp.size()>=k){
//         int i=0;
//         cout<<"YES"<<endl;
//         for(auto it:mpp){
//             cout<<it.second+1<<" ";
//             i++;
//             if(i==k){
//                 break;
//             }
//         }
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     cout << "\n";
// }