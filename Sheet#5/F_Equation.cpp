#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll power(ll x, ll p) {
    ll result = 1;
    for (int i = 0; i < p; i++) {
        result *= x;
    }
    return result;
}

ll eqn(ll x, ll n) {
    ll sum = power(x, 0) - 1;

    for (int i = 2; i <= n; i += 2) {
        sum += power(x, i);
    }
    return sum;
}

void solve() {
    ll x, n;
    cin >> x >> n;

    cout << eqn(x, n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
