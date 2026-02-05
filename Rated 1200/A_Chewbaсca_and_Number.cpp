#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int num = s[i]-'0';
        int inv = 9-num;

        if (inv<num)
        {
            if (i==0 && inv==0) continue;
            s[i]=inv+'0';
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