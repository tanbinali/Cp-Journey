#include <bits/stdc++.h>
using namespace std;

void solve() {
    int value;
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cin >> value;
            
            if (value == 1) {
                int moves = abs(i - 3) + abs(j - 3);
                cout << moves << endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}