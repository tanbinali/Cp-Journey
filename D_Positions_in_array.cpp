#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector <ll> v;
    while(n--){
        int val;
        cin >> val;
        v.push_back(val);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]<=10){
            cout << "A[" << i << "] = " << v[i] << endl;
        }
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