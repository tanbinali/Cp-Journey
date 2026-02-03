#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    bool flag = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(islower(s[i])) s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}