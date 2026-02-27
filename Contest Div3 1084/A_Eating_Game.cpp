#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    set<int>s;
    for(int j=0;j<n;j++){
        vector<int>b=a;
        int rem=0;
        for(int x:b) rem+=x;
        int cur=j,last=-1;

        while(rem>0){
            if(b[cur]>0){
                b[cur]--;
                rem--;
                last=cur;
            }
            cur=(cur+1)%n;
        }
        s.insert(last);
    }

    cout << s.size() << nl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}