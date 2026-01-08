#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int N, Q;
    cin >> N >> Q;

    vector<ll> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (Q--) {
        ll x;
        cin >> x;
        if (binary_search(a.begin(), a.end(), x)) {
            cout << "found" << nl;
        } else {
            cout << "not found" << nl;
        }
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