#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

void solve() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        if (s.find("010") != string::npos || s.find("101") != string::npos) {
            cout << "Good" << nl;
        } else {
            cout << "Bad" << nl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
