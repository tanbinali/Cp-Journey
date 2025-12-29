#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int a,b;
    cin >> a >> b;
    int wht = 0, drk = 0;
    int ca = a, cb = b;

    int tk = 1;
    while(1){
        if(!(wht%2)){
            if(a>=tk){
                a-=tk;
                wht++;
            }
            else break;
        }
        else{
            if(b>=tk){
                b-=tk;
                wht++;
            }
            else break;
        }
        tk *= 2;
    }

    tk = 1;
    while(1){
        if(!(drk%2)){
            if(cb>=tk){
                cb-=tk;
                drk++;
            }
            else break;
        }
        else{
            if(ca>=tk){
                ca-=tk;
                drk++;
            }
            else break;
        }
        tk *= 2;
    }

    cout << max(wht,drk) << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    // solve();

    return 0;
}