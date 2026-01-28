#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    string res = "";

    for (int i = 0; i < s.length(); i++)
    {
        char c=tolower(s[i]);

        if (c!='a' && c!='e' && c!='i' && c!='o' && c!='u'&& c!='y'){
            res+='.';
            res+=c;
        }
    }

    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}