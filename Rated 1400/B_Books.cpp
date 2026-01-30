#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    ll t;
    
    if (cin >> n >> t)
    {
        vector<int> a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxi = 0;
        ll sum = 0;
        int l = 0;

        for (int r = 0; r < n; r++) {
            sum += a[r];
            while (sum>t)
            {
                sum -= a[l];
                l++;
            }
            if ((r-l+1)>maxi) maxi = r-l+1;
        }

        cout << maxi;
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