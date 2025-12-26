#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n, k, a;
    cin >> n >> k >> a;

    if ((n*k) % a != 0) {
        cout << "double" << endl;
        return;
    }

    ll res = (n*k) / a;

    if (res >= INT_MIN && res <= INT_MAX) cout << "int" << endl;
    else cout << "long long" << endl;
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