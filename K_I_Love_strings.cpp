#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s,t;
    cin >> s >> t;
    int m = s.size();
    int n = t.size();

    for (int i = 0; i < max(m, n); i++) {
        if (i < m) cout << s[i];
        if (i < n) cout << t[i];
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}