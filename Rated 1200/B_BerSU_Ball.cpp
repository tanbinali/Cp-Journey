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

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int cnt = 0;
    vector<bool> rem(m,false);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!rem[j])
            {
                if (abs(a[i]-b[j])<=1)
                {
                    rem[j]=true;
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}