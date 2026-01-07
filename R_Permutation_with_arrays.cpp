#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll suma=0, sumb=0;

    for (int i = 0; i < n; i++)
    {
        suma+=a[i];
        sumb+=b[i];
    }
    
    if(suma==sumb) cout << "yes";
    else cout << "no";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }

    solve();

    return 0;
}