#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    int cnt0=0,cnt1=0;
    for (int i=0; i<n; ++i)
    {
        int x;
        cin >> x;
        if (x==0) cnt0++;
        else if (x==1) cnt1++;
    }

    if (cnt0==0) cout << "NO" << nl;
    else if (cnt0>1 && cnt1==0) cout << "NO" << nl;
    else cout << "YES" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}