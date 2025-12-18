#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<long long> u = v;
    sort(u.begin(), u.end());

    vector<long long> pref_v(n + 1, 0);
    vector<long long> pref_u(n + 1, 0);

    for (int i = 0; i < n; i++) {
        pref_v[i + 1] = pref_v[i] + v[i];
        pref_u[i + 1] = pref_u[i] + u[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
            cout << pref_v[r] - pref_v[l - 1] << "\n";
        } else {
            cout << pref_u[r] - pref_u[l - 1] << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}