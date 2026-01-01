#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int x,y;
    cin >> x >> y;

    if(x>y){
        int sum = 0;
        for (int i = y+1; i < x; i++)
        {
            if(i%2){
                sum += i;
            }
        }
        cout << sum << endl;
    }
    else{
        int sum = 0;
        for (int i = x+1; i < y; i++)
        {
            if(i%2){
                sum += i;
            }
        }
        cout << sum << endl;
    }
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