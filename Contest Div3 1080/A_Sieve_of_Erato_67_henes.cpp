#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    bool flg = false;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x==67) flg=true;
    }
    if(flg) cout << "yes" << nl;
    else cout << "no" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}