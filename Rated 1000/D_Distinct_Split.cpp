#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> a(n),b(n);
    vector<int> flg(26,0);

    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        if(!flg[s[i]-'a']){
            flg[s[i]-'a']=1;
            cnt++;
        }
        a[i]=cnt;
    }

    fill(flg.begin(),flg.end(),0);
    cnt=0;

    for (int i = n - 1; i >= 0; i--) {
        if(!flg[s[i]-'a']){
            flg[s[i]-'a']=1;
            cnt++;
        }
        b[i]=cnt;
    }

    int ans=0;
    for (int i=0; i<n-1; i++)
    {
        ans=max(ans,a[i]+b[i+1]);
    }

    cout << ans << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}