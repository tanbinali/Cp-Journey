#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,m;
    while(cin >> n >> m){
        if(n<=0 || m<=0) return;
        if(n>m){
            int sum = 0;
            for (int i = m; i <= n; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum;
        }
        else{
            int sum = 0;
            for (int i = n; i <= m; i++)
            {
                cout << i << " ";
                sum += i;
            }
            cout << "sum =" << sum;
        }
        cout << endl;
    }
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