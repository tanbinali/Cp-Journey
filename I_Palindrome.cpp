#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;

    ll og = n;
    ll rev = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }

    cout << rev << "\n";

    if (og == rev) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
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