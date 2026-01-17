#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (n > 10) {
        cout << s[0] << (n - 2) << s[n - 1] << nl;
    } else {
        cout << s << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}