#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s,t;
    getline(cin,s);
    getline(cin,t);

    cout << s.size() << " " << t.size() << nl;
    cout << s << " " << t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}