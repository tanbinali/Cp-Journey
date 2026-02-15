#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<ll>v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    vector<ll>a(n);
    if(n==2)
    {
        a[0]=v[1];
        a[1]=v[0];
    } 
    else
    {
        ll x=(v[0]+v[n-1])/(n-1);
        a[0]=(x+v[1]-v[0])/2;
        a[n-1]=(x-(v[n-1]-v[n-2]))/2;

        for (int i=1; i<n-1; i++)
        {
            a[i]=(v[i-1]+v[i+1]-2*v[i])/2;
        }
    }
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}