#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    cout << min({k, n, (n + m) / 2}) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}