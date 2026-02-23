#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n,k;
    cin >> n >> k;
    ll c = (n+k-1)/k;
    ll s = c*k;
    cout << (s+n-1)/n << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}