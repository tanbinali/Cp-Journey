#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;

    int cnt0=0,cnt1=0;

    for(char c:s){
        if(c=='0') cnt0++;
        else cnt1++;
    }

    for (int i = 0; i<s.length(); i++)
    {
        if(s[i]=='0'){
            if(cnt1>0) cnt1--;
            else{
                cout << s.length()-i << nl;
                return;
            }
        }
        else{
            if(cnt0>0) cnt0--;
            else{
                cout << s.length()-i << nl;
                return;
            }
        }
    }

    cout << 0 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}