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
    vector<int> pos(n);
    
    int max = n-1;
    pos[n - 1] = n-1;

    for (int i = n-2; i>=0; i--)
    {
        if(a[i]>a[max]) max=i;
        pos[i]=max;
    }

    for (int i = 0; i < n; i++) {
        int tgt=pos[i];
        if(a[i]!=a[tgt]){
            reverse(a.begin()+i, a.begin()+tgt+1);
            break;
        }
    }

    for (int i = 0; i < n; i++)
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