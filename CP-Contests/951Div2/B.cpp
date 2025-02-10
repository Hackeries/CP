#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int countZero(int n){
    if(n==0)
    return 32;
    int count = 0;
    while((n&1) == 0){
        n >>= 1;
        count++;
    }
    return count;
}
void solve(int t){
    vector<int>v;
    v.reserve(t);
    for(int i=0;i<t;++i){
        
        int x,y;cin >> x >> y;
        int z = x^y;
        int countingzeros = countZero(z);
        int leastcommon = 1 << countingzeros;

        v.push_back(leastcommon);
    }
    for(int result : v){
        cout << result << endl;
    }
}
int main(){
    int t=1;
    cin >> t;
    
    solve(t);
}