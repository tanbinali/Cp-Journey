#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    int w=0;
    for(int i=0; i<k; i++) if(s[i]=='W') w++;
    int ans=w;

    for(int i=k; i<n; i++){
        if(s[i]=='W') w++;
        if(s[i-k]=='W') w--;
        ans = min(ans,w);
    }

        cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}