#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;
        int sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum >= a && sum <= b) {
            ans += i;
        }
    }

    cout << ans << endl;
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