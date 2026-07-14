#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

int calc(int a,int b)
{
    while (b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}

void solve() {
    int n,x,y;
    cin >> n >> x >> y;
    
    int a=calc(x,y);
    bool flg = true;
    for (int i=1; i<=n; i++)
    {
        int p;
        cin >> p;
        if ((p-i)%a!=0) flg=false;
    }
    
    if (flg) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}