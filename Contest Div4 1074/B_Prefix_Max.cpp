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
    ll ans=0;
        
    int mx=0;
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        mx=max(mx, a[i]);
        sum+=mx;
    }
    ans=sum;
        

    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i]>a[pos]) pos = i;
    }
    for (int i = 0; i < pos; i++)
    {
        swap(a[i], a[pos]);

        int mx = 0;
        ll sum = 0;
        for (int j = 0; j < n; j++)
        { 
            mx = max(mx, a[j]);
            sum += mx;
        }

        ans = max(ans, sum);
        swap(a[i], a[pos]);
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}