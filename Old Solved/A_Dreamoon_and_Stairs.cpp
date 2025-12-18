#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    if (!(cin >> n >> m)) return;
    int min_moves = (n + 1) / 2;
    int max_moves = n;
    
    int result = -1;
    
    for (int k = min_moves; k <= max_moves; k++) {
        if (k % m == 0) {
            result = k;
            break;
        }
    }

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}