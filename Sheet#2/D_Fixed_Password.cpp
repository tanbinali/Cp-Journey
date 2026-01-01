#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    while(1){
        string s, pass = "1999";
        cin >> s;

        if(s == pass)
        {
            cout << "Correct";
            return;
        }
        cout << "Wrong" << endl;
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