#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int y;
    cin >> y;

    while(1){
        y++;
        string s = to_string(y);
        set<char> a(s.begin(),s.end());
        if(a.size()==s.size()){
            cout << y;
            break;
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