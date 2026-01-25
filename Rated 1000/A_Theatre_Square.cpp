#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n,m,a;
    cin >> n >> m >> a;

    ll sn = (n+a-1)/a;
    ll sm = (m+a-1)/a;

    cout << sn * sm;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}