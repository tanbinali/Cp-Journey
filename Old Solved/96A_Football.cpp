#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int consecutive_count = 1;
    bool is_dangerous = false;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            consecutive_count++;
        } else {
            consecutive_count = 1;
        }

        if (consecutive_count >= 7) {
            is_dangerous = true;
            break;
        }
    }

    if (is_dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}