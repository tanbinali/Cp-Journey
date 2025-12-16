#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<pair<int, int>> laptops(n);

    for (int i = 0; i < n; i++) {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end());

    for (int i = 0; i < n - 1; i++) {
        if (laptops[i].second > laptops[i+1].second) {
            cout << "Happy Alex" << "\n";
            return;
        }
    }

    cout << "Poor Alex" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}