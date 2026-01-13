#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;
    vector<int> a(123,0);
    for (char x:s)
    {
        a[int(x)]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]>0){
            cout << char(i) << " : " << a[i] << nl;
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