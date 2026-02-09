#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n,t;
    cin >> n >> t;
    if (t==10)
    {
        if(n==1) cout << "-1";
        else{
            cout << "1";
            for (int i = 0; i < n-1; i++)
            {
                cout << "0";
            }
        }
    } 
    else
    {
        cout << t;
        for (int i = 0; i < n-1; i++)
        {
            cout << "0";
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