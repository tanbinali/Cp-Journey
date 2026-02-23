#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll n,x,cnt=0;
    cin >> n >> x;
    for (ll i=1; i<=n; i++)
    {
        if (x%i==0 && x/i<=n) cnt++;
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}