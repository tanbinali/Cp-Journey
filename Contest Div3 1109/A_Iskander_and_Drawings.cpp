#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int maxi=0,cur=0;
    for (char c:s)
    {
        if (c=='#')
        {
            cur++;
            maxi=max(maxi,cur);
        } else cur=0;
    }
    if (maxi==0) cout << 0 << nl;
    else cout << (maxi+1)/2 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}