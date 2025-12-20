#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string F1, S1, F2, S2;

    cin >> F1 >> S1;
    cin >> F2 >> S2;

    if (S1 == S2)
        cout << "ARE Brothers";
    else
        cout << "NOT";
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