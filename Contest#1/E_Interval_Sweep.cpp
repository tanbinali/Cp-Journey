#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a,b;
    cin >> a >> b;
    if (a + b >= 1 && abs(a - b) <= 1) cout << "YES\n";
    else cout << "NO\n";
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