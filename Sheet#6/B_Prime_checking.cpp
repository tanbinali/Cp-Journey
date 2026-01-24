#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    if (n <= 1) {
        cout << "NO";
        return;
    }

    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}