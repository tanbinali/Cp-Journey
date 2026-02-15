#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int s1,s2,s3,s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    cout << 4-s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}