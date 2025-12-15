#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    cin >> n;

    int lucky_digit_count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            lucky_digit_count++;
        }
    }
    
    if (lucky_digit_count == 4 || lucky_digit_count == 7) {
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