#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string S;
    cin >> S;

    vector<string> a;
    string curr;
    int bal = 0;

    for (char c : S) {
        curr += c;
        if (c == 'L') bal++;
        else bal--;

        if (bal == 0) {
            a.push_back(curr);
            curr.clear();
        }
    }

    cout << a.size() << nl;
    for (auto p : a) {
        cout << p << nl;
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