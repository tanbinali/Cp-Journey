#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> A(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }

    ll ans = LLONG_MAX;
    ll min_val = A[1] - 1; 

    for (int j = 2; j <= n; j++) {
        ans = min(ans, min_val + A[j] + j);
        min_val = min(min_val, A[j] - j);
    }

    cout << ans << "\n";
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}