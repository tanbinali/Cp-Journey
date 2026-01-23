#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll A, B, X;
    cin >> A >> B >> X;

    if (A > B) swap(A, B);

    ll L = ((A + X - 1) / X) * X;
    ll R = (B / X) * X;

    if (L > R) {
        cout << 0 << nl;
        return;
    }

    ll n = (R - L) / X + 1;
    ll sum = n * (L + R) / 2;

    cout << sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}