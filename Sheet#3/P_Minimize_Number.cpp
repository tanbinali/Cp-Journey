#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    cin >> N;

    int ans = INT_MAX;

    for (int i = 0; i < N; i++) {
        ll x;
        cin >> x;

        int cnt = 0;
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }

        ans = min(ans, cnt);
    }

    cout << ans;
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