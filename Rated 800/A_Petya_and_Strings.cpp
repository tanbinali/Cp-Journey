#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s1,s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++)
    {
        char c1 = tolower(s1[i]);
        char c2 = tolower(s2[i]);

        if (c1<c2){
            cout << "-1";
            return;
        }
        if (c1>c2) {
            cout << "1";
            return;
        }
    }

    cout << "0";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}