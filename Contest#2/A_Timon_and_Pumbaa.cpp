#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b;
    cin >> a >> b;
    if((a-b)>=0) cout << a-b;
    else cout << 0;
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