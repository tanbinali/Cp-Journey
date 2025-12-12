#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int open_brackets = 0;
    int moves_needed = 0;

    for (char c : s) {
        if (c == '(') {
            open_brackets++;
        } else {
            if (open_brackets > 0) {
                open_brackets--;
            } else {
                moves_needed++;
            }
        }
    }

    cout << moves_needed << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}