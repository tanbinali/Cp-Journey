#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;

    size_t pos = s.find('.');

    string p1 = s.substr(0, pos);
    string p2 = s.substr(pos + 1);

    for(char c : p2){
        if (c != '0'){
            cout << "float " << p1 << " 0." << p2;
            return;
        }
    }
    cout << "int " << p1;

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