#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>> a(n);
    for (int i=0; i<n; i++)
    {
        int hp;
        cin >> hp;
        hp%=k;
        if (hp==0) {
            hp=k;
        }
        a[i]={-hp,i+1};
    }
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++) cout << a[i].second << " ";
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}