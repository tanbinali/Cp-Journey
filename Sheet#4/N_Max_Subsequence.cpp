#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int ans = 1;

    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            ans++;
        }
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}