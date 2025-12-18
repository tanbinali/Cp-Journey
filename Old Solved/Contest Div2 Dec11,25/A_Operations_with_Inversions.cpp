#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int len;
        cin >> len;

        int maxSoFar = 0;
        int cnt = 0;

        for (int i = 0; i < len; i++) {
            int val;
            cin >> val;

            if (val < maxSoFar) {
                cnt++;
            } else {
                maxSoFar = val;
            }
        }

        cout << cnt << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
