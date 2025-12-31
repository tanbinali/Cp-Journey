#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    int ones = 0;

    while (n > 0) {
        if (n % 2 != 0) {
            ones++;
        }
        n /= 2;
    }

    ll result = (1LL << ones) - 1;

    cout << result << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}