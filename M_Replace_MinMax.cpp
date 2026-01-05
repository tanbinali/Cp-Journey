#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int minIdx = 0, maxIdx = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] < v[minIdx])
            minIdx = i;
        if (v[i] > v[maxIdx])
            maxIdx = i;
    }

    swap(v[minIdx], v[maxIdx]);
    
    for(int x : v)
        cout << x << " ";
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