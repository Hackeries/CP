#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n; cin >> n;
        vector<pair<int,int> > pr(n);

        for(auto &x :pr)
        cin >> x.first;
        for(auto &x :pr)
        cin >> x.second;

        sort(pr.begin() , pr.end());

        for(auto&x: pr)
        cout << x.first << ' ';

        cout << endl;

        for(auto&x: pr)
        cout << x.second << ' ';

        cout << endl;
    }
}