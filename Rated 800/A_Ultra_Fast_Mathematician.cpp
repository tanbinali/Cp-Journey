#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string a,b;
    cin >> a >> b;

    for (int i = 0; i<a.size(); i++)
    {
        if (a[i]!=b[i]) cout << '1';
        else cout << '0';
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