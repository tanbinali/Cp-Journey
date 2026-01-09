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
    ll min = LLONG_MAX;
    int idx;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]<min){
            min = v[i];
            idx = i+1;
        }
    }

    cout << v[idx-1] << " " << idx;
    
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