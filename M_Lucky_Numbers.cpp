#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

void solve() {
    int a, b;
    cin >> a >> b;

    bool found = false;

    for (int i = a; i <= b; i++) {
        if (isLucky(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
    cout << "\n";
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