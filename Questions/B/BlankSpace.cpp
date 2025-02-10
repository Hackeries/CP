#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;cin >> n;
    vector<int>v(n);

    for(int i=0;i<v.size();++i){
        cin >> v[i];
    }

    int len = 0;
    int ans = 0;
    for(int i=0;i<v.size();++i){
        if(v[i] == 0){
            len=len+1;
        }
        else{
            ans = max(ans,len);
            len = 0;
        }
    }
    return max(ans,len);
}
int main(){
    int t;cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}