#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a,b;
    cin >> a >> b;
    string s;
    cin >> s;

    if(s[a] != '-') {
        cout << "No";
        return;
    }
    for (int i = 0; i < a; i++)
    {
        if(!isdigit(s[i])){
            cout << "No";
            return;
        }
    }
    for (int i = a+1; i < s.length(); i++)
    {
        if(!isdigit(s[i])){
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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