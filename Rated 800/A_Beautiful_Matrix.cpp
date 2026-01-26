#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int val;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; ++j)
        {
            cin >> val;
            
            if(val==1){
                int mov = abs(i-3) + abs(j-3);
                cout << mov;
                return;
            }
        }
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