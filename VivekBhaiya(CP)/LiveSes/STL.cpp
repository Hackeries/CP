#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int MOD = 1e9 + 7;
int binpow(int base, int expo){
    if(expo == 1)return 1;

    if(expo%2 == 1){
        return (base * binpow(base , expo-1)) % MOD;
    }else{
        int temp = binpow(base , expo / 2);
        return (temp * temp) % MOD;
    }
}
int inverse(int x){
    return (x,(MOD-2));
}
int gcd(int a, int b){
    if(a==0)
    return b;
    return (gcd(b%a,a));
}
void printvec(vector<int>&v){
     for(int i=0;i<v.size();++i){
        cout << v[i] << " " ;
    }
    cout << endl;
}
void solve(){

    // vector<pair<int,int>>v;

    // int n;cin >> n;
    // while(n--){
    //     int x,y;cin >> x >> y;

    //     v.pb(mp(x,y));
    //     // v.pb({x,y});
    // }
    // printvec(v);


    // array of vectors

    // int N;cin >> N;
    // vector<int>v[N];

    // for(int i=0;i<N;++i){

    //     int n;cin >> n;

    //     for(int j=0;j<n;++j){
    //         int x;cin >> x;

    //         v[i].pb(x);
    //     }
    // }

    // for(int i=0;i<N;++i){
    //     printvec(v[i]);
    // }


    // MAP

    map<string,int>m;
    int n;cin >> n;


    // for(int i=0;i<n;++i){
    //     string s;cin >> s;
    //     m[s]++;
    // }

    // for(auto pr: m){
    //     cout << pr.first << " " << pr.second << endl;
    // }

    for(int i=0;i<n;++i){
        string s;
        int x;
        cin >> s >> x;

        m[s] = x;
    }

    for(auto ans: m){
        cout << ans.first << " " << ans.second << endl;
    }


}

int main(){
    int t=1;
    cin >> t;
    
    while(t--){
       solve();
    }
}