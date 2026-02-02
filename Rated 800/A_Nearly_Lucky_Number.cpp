#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string n;
    cin >> n;

    int cnt=0;
    for (char c:n)
        if(c=='4' || c=='7') cnt++;

    if (cnt==4 || cnt==7) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}