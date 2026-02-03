#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

const int maxi = 1000001;
bool prime[maxi];

void solve() {
    fill(prime, prime + maxi, true);
    prime[0] = false;
    prime[1] = false;
    
    for (int i = 2; i * i < maxi; i++)
    {
        if (prime[i])
        {
            for (int j = i*i; j < maxi; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        ll root = sqrt(x);

        if (root*root==x && prime[root]) cout << "YES" << nl;
        else cout << "NO" << nl;
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