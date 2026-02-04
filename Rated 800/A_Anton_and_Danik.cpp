#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = 0;
    int d = 0;

    for (char c:s) {
        if (c=='A') a++;
        else d++;
        
    }

    if (a>d) cout << "Anton";
    else if (d>a) cout << "Danik";
    else cout << "Friendship";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}