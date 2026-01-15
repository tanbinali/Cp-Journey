#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    map<char, int> cnt;

    for (char c : s) {
        c = toupper(c);
        if (c == 'E' || c == 'G' || c == 'Y' || c == 'P' || c == 'T') {
            cnt[c]++;
        }
    }

    int ans = min({
        cnt['E'],
        cnt['G'],
        cnt['Y'],
        cnt['P'],
        cnt['T']
    });

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}