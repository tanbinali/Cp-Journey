#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,m,a,b;
    cin >> n >> m >> a >> b;

    int cs = n*a;

    int cnt = n/m;
    int rem = n%m;
    int cc = (cnt*b) + min(rem*a,b);

    cout << min(cs,cc);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}