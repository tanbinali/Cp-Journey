#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n, w;
    cin >> k >> n >> w;
    
    int bananas_count = w * (w + 1) / 2;
    
    int total_cost = k * bananas_count;
    
    int borrow = total_cost - n;
    
    if (borrow < 0) {
        cout << 0 << endl;
    } else {
        cout << borrow << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}