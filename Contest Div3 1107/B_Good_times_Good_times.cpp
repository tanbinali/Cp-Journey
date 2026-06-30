#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

vector<ll> v;

void calc()
{
    for (int i=0; i<=9; i++)
    {
        for (int j=i; j<=9; j++)
        {
            for (int k=1; k<=10; k++)
            {
                for (int m=0; m<(1<<k); m++)
                {
                    ll tmp=0;
                    for (int n=0; n<k; n++)
                    {
                        if(m&(1<<n)) tmp=tmp*10+j;
                        else tmp=tmp*10+i;
                    }
                    if (tmp>=2 && tmp<=1000000000LL) v.push_back(tmp);
                }
            }
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
}

bool flg(ll n)
{
    bool vis[10]={};
    int cnt=0;

    while (n)
    {
        int d=n%10;
        if (!vis[d])
        {
            vis[d]=true;
            cnt++;
            if (cnt>2) return false;
        }
        n/=10;
    }
    return true;
}

void solve() {
    ll x;
    cin >> x;

    for (ll y:v)
    {
        if (flg(x*y))
        {
            cout << y << nl;
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    calc();

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}