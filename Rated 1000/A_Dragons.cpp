#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if(s>a[i].first){
            s+=a[i].second;
        }
        else{
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}