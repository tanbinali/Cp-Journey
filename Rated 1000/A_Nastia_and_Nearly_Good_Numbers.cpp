#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll a,b;
    cin >> a >> b;
    
    if (b==1) cout << "NO" << nl;
    else
    {
        cout << "YES" << nl;
        cout << a << " " << a*b << " " << a*(b+1) << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}