#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    char c;
    cin >> c;
    if(c == 'z') {
        cout << 'a';
        return;
    }
    cout << ++c;
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