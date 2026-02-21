#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int a=0,b=0;
    for(char c:s){
        if (c=='0') a++;
        else b++;
    }
    if(b%2==0)
    {
        cout << b << nl;
        for (int i=0; i<n; i++)
        {
            if(s[i]=='1') cout << i+1 << " ";
        }
        cout << nl;
    }
    else if(a%2!=0)
    {
        cout << a << nl;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='0') cout << i+1 << " ";
        }
        cout << nl;
    }
    else cout << -1 << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}