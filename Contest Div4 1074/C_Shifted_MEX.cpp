#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    set<int> s(a.begin(), a.end());
    a = vector<int>(s.begin(), s.end());
    int maxi=0, tmp=0;
    for (int i = 0; i < a.size(); i++) 
    {
        if (i==0 || a[i]==a[i-1]+1) tmp++;
        else tmp = 1;
        maxi=max(maxi, tmp);
    }

    cout << maxi << nl;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}