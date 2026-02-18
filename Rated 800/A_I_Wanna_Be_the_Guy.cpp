#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    set<int>a;

    int p;
    cin >> p;
    for (int i=0; i<p; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    int q;
    cin >> q;
    for (int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    if (a.size()==n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}