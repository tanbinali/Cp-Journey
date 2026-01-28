#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;

    int s;
    int cnt1=0, cnt2=0, cnt3=0, cnt4=0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if(s==1) cnt1++;
        else if(s==2) cnt2++;
        else if(s==3) cnt3++;
        else cnt4++;
    }

    int ts=cnt4;

    ts+=cnt3;
    cnt1=cnt1-cnt3; 

    if (cnt1<0) cnt1=0;

    ts+=cnt2/2;
    
    if (cnt2%2!=0){
        ts++;
        cnt1=cnt1-2;
        if(cnt1<0) cnt1=0;
    }

    if (cnt1>0){
        ts+=(cnt1+3)/4;
    }

    cout << ts;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}