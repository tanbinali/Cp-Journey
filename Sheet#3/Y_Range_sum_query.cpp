#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int N, Q;
    cin >> N >> Q;

    vector<ll> pref(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        ll x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    while (Q--) {
        int L, R;
        cin >> L >> R;
        cout << pref[R] - pref[L - 1] << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}