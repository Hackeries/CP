#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int>a(n),b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        set<int>st1,st2;

        for(int i=0;i<n;++i){
            if(a[i]<=k)
            st1.insert(a[i]);
        }
        for(int j=0;j<m;++j){
            if(b[j]<=k)
            st2.insert(b[j]);
        }
        if(st1.size()<k/2 || st2.size()<k/2)
        cout << "NO" << endl;
        
        else{
            bool check = true;
            set<int>s;

            for(auto it:st1){
                s.insert(it);
            }
            for(auto it:st2){
                s.insert(it);
            }
            for(int i=1;i<=k;++i){
                if(s.find(i) == s.end())
                check = false;

            }
            if(check)
            cout << "YES" << endl;
            else
            cout << "NO" << endl;
        }
    }
}