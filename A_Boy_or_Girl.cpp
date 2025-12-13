#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    set<char> distinct_chars;

    for (int i = 0; i < s.length(); i++) {
        distinct_chars.insert(s[i]);
    }

    if (distinct_chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}