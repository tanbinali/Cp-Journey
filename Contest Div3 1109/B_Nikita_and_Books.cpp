#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    ll sum=0;
    bool flg=true;
    for (int i=1; i<=n; i++)
    {
        ll a;
        cin >> a;
        sum+=a;
        if (sum<(ll)i*(i+1)/2) flg=false;
    }
    if (flg) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}