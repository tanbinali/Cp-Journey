#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    set<char> c;

    for(int i = 0; i < s.length(); i++)
    {
        c.insert(s[i]);
    }

    if(c.size()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}