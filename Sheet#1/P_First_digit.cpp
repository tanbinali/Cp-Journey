#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;

    for(char c : s){
        int digit = int(c);
        if(digit % 2 == 0){
            cout << "EVEN";
        }
        else{
            cout << "ODD";
        }
        break;
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