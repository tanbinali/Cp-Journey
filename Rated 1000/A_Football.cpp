#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    if (cin >> n) {
        map<string, int> m;
        
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            m[s]++;
        }

        string ans = "";
        int maxi = 0;
        for (auto i:m){
            if (i.second>maxi){
                maxi = i.second;
                ans = i.first;
            }
        }

        cout << ans;
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