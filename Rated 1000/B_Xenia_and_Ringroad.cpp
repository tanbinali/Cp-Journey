#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int pos = 1;
    ll cnt = 0;

    for (int i = 0; i < m; i++) {
        int tgt;
        cin >> tgt;

        if (tgt >= pos) {
            cnt += (tgt - pos);
        } else {
            cnt += (ll)(n - pos) + tgt;
        }
        pos = tgt;
    }

    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}