#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;
    string sub = "hello";
    for (int i = 0,j=0; i < s.size(); i++)
    {
        if(j>=5){
            cout << "YES";
            return;
        }
        if(s[i]==sub[j]) j++;
    }

    cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}