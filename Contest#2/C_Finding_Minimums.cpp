#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N, K;
    cin >> N >> K;

    ll x;
    ll mn = LLONG_MAX;
    int cnt = 0;

    for (int i = 0; i < N; i++) {
        cin >> x;
        mn = min(mn, x);
        cnt++;

        if (cnt == K) {
            cout << mn << " ";
            mn = LLONG_MAX;
            cnt = 0;
        }
    }
    if (cnt > 0) {
        cout << mn << " ";
    }

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