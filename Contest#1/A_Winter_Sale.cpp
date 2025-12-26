#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x,p;
    cin >> x >> p;

    cout << fixed << setprecision(2);

    cout << float((100.0/(100-x))*p);
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