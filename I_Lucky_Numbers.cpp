#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;

    int a = s[0] - '0';
    int b = s[1] - '0';

    if ((a != 0 && b % a == 0) || (b != 0 && a % b == 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}