#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int num[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    
    int count = sizeof(num)/sizeof(num[0]);
    bool flag = false;

    for (int i = 0; i < count; i++)
    {
        if (n%num[i]==0)
        {
            flag = true;
            break;
        }
    }

    if(flag) cout << "YES";
    else cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}