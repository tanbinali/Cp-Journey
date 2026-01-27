#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define nl '\n'

void solve() {
    string s;
    cin >> s;
    
    vector<char> nums;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '+') nums.push_back(s[i]);
    }
    
    sort(nums.begin(),nums.end());
    cout << nums[0];
    for(int i = 1; i < nums.size(); i++)
    {
        cout << "+" << nums[i];
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