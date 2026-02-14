#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> p(101),ans(101);
    for (int i = 1; i<=n; i++)
    {
        cin >> p[i];
        ans[p[i]]=i;
    }
    for (int i = 1; i<=n; i++)
    {
        cout << ans[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}