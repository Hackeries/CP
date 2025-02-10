#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

void solve()
{
    int n, x;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int nonDistinctCount = unique(a.begin(), a.end()) - a.begin();

    if ((n - nonDistinctCount) % 2 == 0)
    {
        cout << nonDistinctCount << endl;
    }
    else
    {
        cout << nonDistinctCount - 1 << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
