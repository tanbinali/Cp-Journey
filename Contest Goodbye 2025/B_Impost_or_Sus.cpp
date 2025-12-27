#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string r;
    cin >> r;

    int op = 0, cnt = 0;

    if(r[0] == 'u'){
        r[0] = 's';
        op++;
    }

    if(r[r.length()-1] == 'u'){
        r[r.length()-1] = 's';
        op++;
    }

    for (int i = 0; i < r.length(); i++)
    {
        if(r[i] == 'u') cnt++;
        else{
            if(cnt>0){
                op += cnt/2;
                cnt = 0;
            }
        }
    }
    
    cout << op << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}