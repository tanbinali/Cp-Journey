#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        int a,b,c;
        cin >> a >> b >> c;

        if (a+b+c >= 2) cnt++;
    }

    cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}