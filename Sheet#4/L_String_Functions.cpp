#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

void solve() {
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    while (Q--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pop_back") {
            S.pop_back();
        }
        else if (cmd == "front") {
            cout << S.front() << nl;
        }
        else if (cmd == "back") {
            cout << S.back() << nl;
        }
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            int L = min(l, r);
            int R = max(l, r);
            sort(S.begin() + L - 1, S.begin() + R);
        }
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            int L = min(l, r);
            int R = max(l, r);
            reverse(S.begin() + L - 1, S.begin() + R);
        }
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << nl;
        }
        else if (cmd == "substr") {
            int l, r;
            cin >> l >> r;
            int L = min(l, r);
            int R = max(l, r);
            cout << S.substr(L - 1, R - L + 1) << nl;
        }
        else if (cmd == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
