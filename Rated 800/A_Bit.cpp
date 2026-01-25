#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int x = 0;
    while (n--) {
        string s;
        cin >> s;

        if (s.find("++") != string::npos) x++;
        else x--;
    }

    cout << x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}