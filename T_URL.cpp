#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string S;
    cin >> S;

    int pos = S.find('?');
    string query = S.substr(pos + 1);

    stringstream ss(query);
    string token;

    while (getline(ss, token, '&')) {
        int eq = token.find('=');
        string key = token.substr(0, eq);
        string value = token.substr(eq + 1);

        cout << key << ": " << value << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}