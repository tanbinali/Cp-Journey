#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> v;

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);

        if(v[i]>max) max = v[i];
    }

    cout << max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}