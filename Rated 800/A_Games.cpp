#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> h(n),a(n);

    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && h[i] == a[j]) {
                cnt++;
            }
        }
    }

    cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}