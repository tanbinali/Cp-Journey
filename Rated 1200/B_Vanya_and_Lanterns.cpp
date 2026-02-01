#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    ll l;
    cin >> n >> l;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    double maxi = 2*a[0]; 

    maxi = max(maxi,(double)2*(l-a[n-1]));

    for (int i = 0; i < n - 1; i++)
    {
        double gap = a[i+1]-a[i];
        maxi = max(maxi,gap);
    }
 
    cout << fixed << setprecision(10) << maxi/2.0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}