#include <bits/stdc++.h>
#define lli long long
#define pii pair<lli, lli>
#define fi first
#define sc second
#define pb push_back
#define EB emplace_back
#define MP make_pair
#define vi vector<lli>
#define vov vector<vector<lli>>
#define vpii vector<pair<lli, lli>>
#define all(o) (o).begin(), (o).end()
#define fr(i, n) for (lli i = 0; i < n; ++i)
#define br(n, i) for (lli i = n; i >= 0; --i)
#define vovfr(i, n, m) fr(i, n) { fr(j, m) {} }
#define rep(i, a, b) for (lli i = a; i <= b; ++i)
#define per(i, b, a) for (lli i = b; i >= a; --i)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
const lli MOD = 1e9 + 7;

bool hasConsecutiveElements(const vi& row) {
    vector<lli> sorted_row = row;
    sort(all(sorted_row));

    for (lli i = 1; i < sorted_row.size(); ++i) {
        if (sorted_row[i] - sorted_row[i - 1] == 1) {
            return true;
        }
    }
    return false;
}

void solve() {
    lli n, m;
    cin >> n >> m;
    vector<vi> v(n, vi(m));

    fr(i, n) {
        fr(j, m) {
            cin >> v[i][j];
        }
        sort(all(v[i]));
    }
    
    vi v2(n);
    fr(i,n)v2[i] = i+1;
    
    fr(i,n){
        fr(j,m){
            if(v[i][0] > v[j][0]){
                swap(v[i],v[j]);
                swap(v2[i],v2[j]);
            }
        }
    }
    // lli cnt = 0;
    fr(j,m){
        fr(i,n){
            if(v[i][j] != j*n+i){
                cout << -1 << "\n";
                return;
            }
        }
        // cnt++;
    }
    fr(i,n)cout << v2[i] << " ";
        cout << "\n";
}

signed main() {
    fastIO;
    lli t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}
