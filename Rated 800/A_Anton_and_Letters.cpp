#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    getline(cin,s);

    set<char> a;
    for (char c:s)
    {
        if (c>='a' && c<='z') a.insert(c);
    }

    cout << a.size() << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}