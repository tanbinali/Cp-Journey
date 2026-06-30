#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans=1;
    for (int i=0; i<n-1; i++)
    {
        if (s[i]!=s[i+1]) ans++;
    }
    
    if (ans==2) cout << 2 << nl;
    else cout << 1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}