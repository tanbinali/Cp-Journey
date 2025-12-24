#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    char X;
    cin >> X;

    if (X >= '0' && X <= '9') {
        cout << "IS DIGIT";
    } else {
        cout << "ALPHA\n";
        if (X >= 'A' && X <= 'Z') {
            cout << "IS CAPITAL";
        } else {
            cout << "IS SMALL";
        }
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