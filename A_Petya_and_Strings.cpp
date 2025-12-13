#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1 < c2) {
            cout << "-1" << endl;
            return;
        }
        if (c1 > c2) {
            cout << "1" << endl;
            return;
        }
    }

    cout << "0" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}