#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    int a,b,cur=0,maxi = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cur-=a;
        cur+=b;
        if(cur>maxi) maxi = cur;
    }
    cout << maxi;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}