#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int N;
    cin >> N;

    if (N == 1) {
        cout << 0;
        return;
    }
    if (N == 2) {
        cout << 1;
        return;
    }

    ll a = 0, b = 1, c;
    for (int i = 3; i <= N; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    cout << b;
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