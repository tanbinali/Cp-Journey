#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;

    if (c=='g')
    {
        cout << 0 << nl;
        return;
    }

    s+=s;
    int maxi = 0;
    int last = -1;

    for (int i=2*n-1; i>=0; i--)
    {
        if (s[i]=='g') last=i;
        if (s[i]==c && i<n && last!=-1) maxi = max(maxi,last-i);
    }

    cout << maxi << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}