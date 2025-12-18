#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        string doubled = str + str;

        int best = 0, streak = 0;

        for (char ch : doubled) {
            if (ch == '0') {
                ++streak;
            } else {
                best = max(best, streak);
                streak = 0;
            }
        }

        best = max(best, streak);
        cout << best << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
