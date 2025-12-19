#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    double a,b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << floor(a/b) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << endl;
    cout << "round " << a << " / " << b << " = " << round(a/b);
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