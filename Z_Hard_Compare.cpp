#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    long double left  = B * log((long double)A);
    long double right = D * log((long double)C);

    if (left > right) cout << "YES";
    else cout << "NO";

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