#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    ll max = 0;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        ll cnt = 0;
        
        while (x % 2 == 0) {
            cnt++;
            x /= 2;
        }

        if (cnt > max) {
            max = cnt;
        }
    }

    cout << max << endl;
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