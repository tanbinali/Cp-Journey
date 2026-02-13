#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    int cnt=0;

    for (int i = 0; i < n; i++)
    {
        int p,q;
        cin >> p >> q;
        if(q-p>=2) cnt++;
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}