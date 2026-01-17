#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int q;
    string S;
    
    cin >> q;
    cin >> S;

    string og = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    for (char &c : S) {
        if (q == 1) {
            int idx = og.find(c);
            c = key[idx];
        }
        else {
            int idx = key.find(c);
            c = og[idx];
        }
    }

    cout << S;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}