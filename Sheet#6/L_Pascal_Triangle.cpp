#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        ll value = 1;
        for (int j = 0; j <= i; j++)
        {
            cout << value << " ";
            value = value*(i-j)/(j+1);
        }
        cout << nl;
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