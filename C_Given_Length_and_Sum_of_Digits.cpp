#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, s;
    if (!(cin >> m >> s)) return;

    if (s == 0) {
        if (m == 1) {
            cout << "0 0" << endl;
        } else {
            cout << "-1 -1" << endl;
        }
        return;
    }
    if (s > 9 * m) {
        cout << "-1 -1" << endl;
        return;
    }

    string max_num = "";
    int temp_s = s;
    for (int i = 0; i < m; i++) {
        int d = min(9, temp_s);
        max_num += to_string(d);
        temp_s -= d;
    }
    string min_num = "";
    temp_s = s;
    for (int i = 0; i < m; i++) {
        int d;
        if (i == 0) {
            d = 1;
        } else {
            d = 0;
        }

        int remaining_pos = m - 1 - i;
        int required_min = temp_s - 9 * remaining_pos;
        
        d = max(d, required_min);
        
        min_num += to_string(d);
        temp_s -= d;
    }

    cout << min_num << " " << max_num << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}