#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == mid && j == mid) {
                cout << 'X';
            }
            else if (i == j) {
                cout << '\\';
            }
            else if (i + j == n - 1) {
                cout << '/';
            }
            else {
                cout << '*';
            }
        }
        cout << endl;;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
