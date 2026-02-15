#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    for (int i = 1; i<=n; i++)
    {
        if (i%2==1) cout << "I hate";
        else cout << "I love";
        if (i==n) cout << " it";
        else cout << " that ";
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