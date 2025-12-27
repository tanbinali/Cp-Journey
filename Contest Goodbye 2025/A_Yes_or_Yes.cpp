#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    int cnt = 0;

    for(char c:s)
        if(c == 'Y') cnt++;

    if(cnt > 1) cout << "NO" << endl;
    else cout << "YES" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}