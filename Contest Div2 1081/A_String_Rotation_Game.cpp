#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int cnt=0;
    for (int i=0; i<n; i++)
    {
        if(s[i]!=s[(i+1)%n]) cnt++;
    }
    if(cnt<n) cout << cnt+1 << nl;
    else cout << cnt << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}