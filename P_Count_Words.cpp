#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string S;
    getline(cin, S);

    int words = 0;
    bool inWord = false;

    for (char c : S) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << words;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}