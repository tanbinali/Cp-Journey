#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    string sub = "EGYPT";
    size_t pos = 0;

    while ((pos = s.find(sub, pos)) != string::npos) {
        s.replace(pos, sub.length(), " ");
    }

    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}