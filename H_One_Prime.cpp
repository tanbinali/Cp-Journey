#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "NO";
        return;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
    
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