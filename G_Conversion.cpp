#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    for (char &c : s) {
        if (c == ',') {
            c = ' ';
        } else if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }

    cout << s << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
