#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int evn = 0,evnidx = 0, odd = 0, oddidx = 0;

    int val;
    for (int i = 1; i <= n; i++)
    {
        cin >> val;
        if (val%2==0)
        {
            evn++;
            evnidx=i;
        }
        else
        {
            odd++;
            oddidx=i;
        }
    }

    if (evn==1) cout << evnidx;
    else cout << oddidx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}