#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    char c;
    int n;
    vector<int>v;
    cin >> c >> n;

    while(n--){
        int val;
        cin >> val;
        v.push_back(val);
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << c;
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