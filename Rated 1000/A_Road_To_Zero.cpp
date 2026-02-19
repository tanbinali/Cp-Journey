#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    ll x,y,a,b;
    cin >> x >> y >> a >> b;
    ll mn=min(x,y);
    ll mx=max(x,y);
    ll c1=(x+y)*a;
    ll c2=mn*b+(mx-mn)*a;
    cout << min(c1,c2) << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}