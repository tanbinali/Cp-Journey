#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    set<int> distinct_colors;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        distinct_colors.insert(a);
    }

    while (true) {
        int c = distinct_colors.size();
        
        if (distinct_colors.count(c)) {
            cout << c << "\n";
            return;
        }
        
        distinct_colors.insert(c);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}