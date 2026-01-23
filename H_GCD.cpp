#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

ll gcd(ll a, ll b) {
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    ll a, b;
    cin >> a >> b;

    ll g = gcd(a, b);
    ll l = (a / g) * b;

    cout << g << " " << l;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();

    return 0;
}
