#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    char x;
    cin >> x;

    if (x >= 'a' && x <= 'z') {
       cout << char(x-32);
    } else {
       cout << char(x+32);
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