#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (!a.empty()) {
        if (a.size() == 1) {
            cout << a.front() << " ";
            break;
        }
        cout << a.front() << " " << a.back() << " ";
        a.pop_back();
        a.erase(a.begin());
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