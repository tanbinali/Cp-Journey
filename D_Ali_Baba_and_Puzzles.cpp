#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;

    if (a + b - c == d) cout << "YES";
    else if (a - b + c == d) cout << "YES";
    else if (a + b * c == d) cout << "YES";
    else if (a * b + c == d) cout << "YES";
    else if (a - b * c == d) cout << "YES";
    else if (a * b - c == d) cout << "YES";
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