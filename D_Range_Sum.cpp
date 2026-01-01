#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll sum_to(ll n) {
    return n * (n + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll L, R;
        cin >> L >> R;

        if (L > R) swap(L, R);

        ll ans = sum_to(R) - sum_to(L - 1);
        cout << ans << '\n';
    }

    return 0;
}
