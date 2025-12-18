#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    if (cin >> n >> t) {
        vector<int> a(n);

        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }

        int current_pos = 1;

        while (current_pos < t) {
            current_pos += a[current_pos];
        }
        
        if (current_pos == t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}