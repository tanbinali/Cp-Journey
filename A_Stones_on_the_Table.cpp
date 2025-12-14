#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int removals = 0;
    
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            removals++;
        }
    }
    
    cout << removals << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}