#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        vector<int> sums(n);
        int current_total = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            current_total += a;
            sums[i] = current_total;
        }

        int m;
        cin >> m;
        while (m--) {
            int q;
            cin >> q;
            auto it = lower_bound(sums.begin(), sums.end(), q);
            
            int pile_index = (it - sums.begin()) + 1;
            
            cout << pile_index << "\n";
        }
    }
    
    return 0;
}