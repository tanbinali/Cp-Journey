#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int m,s;
    cin >> m >> s;

    if((s==0 && m>1) || s>9*m){
        cout << "-1 -1";
        return;
    }

    if(m==1 && s==0){
        cout << "0 0";
        return;
    }

    int sum=s;
    string mx="";
    for (int i=0; i<m; i++)
    {
        int tmp=min(9,sum);
        mx+=char('0'+tmp);
        sum-=tmp;
    }

    sum=s;
    string mn(m,'0');
    for (int i=0; i<m; i++)
    {
        for (int d=(i==0 ? 1:0); d<=9; d++)
        {
            if (sum-d>=0 && sum-d<=9*(m-i-1))
            {
                mn[i]=char('0'+d);
                sum-=d;
                break;
            }
        }
    }

    cout << mn << " " << mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}