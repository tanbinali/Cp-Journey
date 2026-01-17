#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string S;
    cin >> S;

    int n = S.size();
    if (n == 1) {
        cout << S;
        return;
    }

    string ans = "~";

    for (int i = 1; i < n; i++) {
        string X = S.substr(0, i);
        string Y = S.substr(i);

        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());

        string can = X + Y;
        ans = min(ans, can);
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}