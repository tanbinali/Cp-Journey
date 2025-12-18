#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long shifts = (k - 1) / (n - 1);

        cout << k + shifts << endl;
    }

    return 0;
}