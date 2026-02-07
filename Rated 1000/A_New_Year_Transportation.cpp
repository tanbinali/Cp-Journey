#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n, t;
    cin >> n >> t;
    vector<int> a(n);

    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int pos = 1;

    while (pos < t) pos+=a[pos];
    if(pos==t) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}