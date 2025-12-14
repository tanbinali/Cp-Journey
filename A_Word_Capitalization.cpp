#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    if (!s.empty()) {
        s[0] = toupper(s[0]);
    }
    
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}