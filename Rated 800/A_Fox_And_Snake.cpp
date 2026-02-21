#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            for (int j = 0; j < m; j++) cout << "#";
        else {
            if ((i / 2) % 2 == 1)
            {
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
            }
        }
        cout << nl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}