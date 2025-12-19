#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n,m;
    cin >> n >> m;

    cout << (n%10)+(m%10);
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